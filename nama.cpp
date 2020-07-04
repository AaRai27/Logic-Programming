<!DOCTYPE html>
<!-- saved from url=(0083)https://www.hackerrank.com/contests/hourrank-30/challenges/video-conference/problem -->
<html lang="en-us" class="gr__hackerrank_com" style="--font-family-text:OpenSans, Arial, Helvetica, sans-serif; --font-family-input:SourceCodePro, monaco, Courier, monospace;"><head><meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
  
  
  <meta name="description" id="meta-description" content="Video Conference"><meta property="og:image" id="meta-og-image" content="https://hrcdn.net/og/default.jpg"><meta property="og:description" id="meta-og-description" content="Video Conference"><meta property="og:site_name" id="meta-og-site" content="HackerRank"><meta property="og:type" id="meta-og-type" content="website"><meta property="article:author" content="https://www.facebook.com/hackerrank"><meta name="twitter:card" id="meta-twitter-card" content="summary"><meta name="twitter:site" id="meta-twitter-site" content="@hackerrank"><meta property="fb:app_id" id="meta-fb-id" content="347499128655783"><meta name="theme-color" content="rgb(57, 66, 78)"><meta content="authenticity_token" name="csrf-param" id="csrf-param"><meta content="CE2up+dvFMUXkNEmiCmgVzZ/3LLsvsPBqIhnNFm5SV7cuMxOFSCI9WJsOuM2QBVilcJepG+zggFn5Oyf/608iA==" name="csrf-token" id="csrf-token">
  <script type="text/javascript" async="" src="./nama_files/mixpanel-2-latest.min.js.download"></script><script type="text/javascript" async="" src="./nama_files/ga.js.download"></script><script async="" src="./nama_files/gtm.js.download"></script><script>/*!
 * JavaScript Cookie v2.1.3
 * https://github.com/js-cookie/js-cookie
 *
 * Copyright 2006, 2015 Klaus Hartl & Fagner Brack
 * Released under the MIT license
 */
;(function (factory) {
	var registeredInModuleLoader = false;
	if (typeof define === 'function' && define.amd) {
		define(factory);
		registeredInModuleLoader = true;
	}
	if (typeof exports === 'object') {
		module.exports = factory();
		registeredInModuleLoader = true;
	}
	if (!registeredInModuleLoader) {
		var OldCookies = window.Cookies;
		var api = window.Cookies = factory();
		api.noConflict = function () {
			window.Cookies = OldCookies;
			return api;
		};
	}
}(function () {
	function extend () {
		var i = 0;
		var result = {};
		for (; i < arguments.length; i++) {
			var attributes = arguments[ i ];
			for (var key in attributes) {
				result[key] = attributes[key];
			}
		}
		return result;
	}

	function init (converter) {
		function api (key, value, attributes) {
			var result;
			if (typeof document === 'undefined') {
				return;
			}

			// Write

			if (arguments.length > 1) {
				attributes = extend({
					path: '/'
				}, api.defaults, attributes);

				if (typeof attributes.expires === 'number') {
					var expires = new Date();
					expires.setMilliseconds(expires.getMilliseconds() + attributes.expires * 864e+5);
					attributes.expires = expires;
				}

				try {
					result = JSON.stringify(value);
					if (/^[\{\[]/.test(result)) {
						value = result;
					}
				} catch (e) {}

				if (!converter.write) {
					value = encodeURIComponent(String(value))
						.replace(/%(23|24|26|2B|3A|3C|3E|3D|2F|3F|40|5B|5D|5E|60|7B|7D|7C)/g, decodeURIComponent);
				} else {
					value = converter.write(value, key);
				}

				key = encodeURIComponent(String(key));
				key = key.replace(/%(23|24|26|2B|5E|60|7C)/g, decodeURIComponent);
				key = key.replace(/[\(\)]/g, escape);

				return (document.cookie = [
					key, '=', value,
					attributes.expires ? '; expires=' + attributes.expires.toUTCString() : '', // use expires attribute, max-age is not supported by IE
					attributes.path ? '; path=' + attributes.path : '',
					attributes.domain ? '; domain=' + attributes.domain : '',
					attributes.secure ? '; secure' : ''
				].join(''));
			}

			// Read

			if (!key) {
				result = {};
			}

			// To prevent the for loop in the first place assign an empty array
			// in case there are no cookies at all. Also prevents odd result when
			// calling "get()"
			var cookies = document.cookie ? document.cookie.split('; ') : [];
			var rdecode = /(%[0-9A-Z]{2})+/g;
			var i = 0;

			for (; i < cookies.length; i++) {
				var parts = cookies[i].split('=');
				var cookie = parts.slice(1).join('=');

				if (cookie.charAt(0) === '"') {
					cookie = cookie.slice(1, -1);
				}

				try {
					var name = parts[0].replace(rdecode, decodeURIComponent);
					cookie = converter.read ?
						converter.read(cookie, name) : converter(cookie, name) ||
						cookie.replace(rdecode, decodeURIComponent);

					if (this.json) {
						try {
							cookie = JSON.parse(cookie);
						} catch (e) {}
					}

					if (key === name) {
						result = cookie;
						break;
					}

					if (!key) {
						result[name] = cookie;
					}
				} catch (e) {}
			}

			return result;
		}

		api.set = api;
		api.get = function (key) {
			return api.call(api, key);
		};
		api.getJSON = function () {
			return api.apply({
				json: true
			}, [].slice.call(arguments));
		};
		api.defaults = {};

		api.remove = function (key, attributes) {
			api(key, '', extend(attributes, {
				expires: -1
			}));
		};

		api.withConverter = init;

		return api;
	}

	return init(function () {});
}));
</script>
  <script>
    window.BACKEND_ENDPOINT = 'https://www.hackerrank.com/';
    window.MANIFEST_VERSION = '16568d183c';
  </script>

  

  <meta name="viewport" content="width=device-width, initial-scale=1">
  <link rel="icon" type="image/png" href="https://hrcdn.net/fcore/assets/favicon-62bdd46faf.png">

  <!-- Prefetch dns on production -->
  
    <link rel="dns-prefetch" href="https://hrcdn.net/">
    <link rel="dns-prefetch" href="https://d3keuzeb2crhkn.cloudfront.net/">
    <link rel="dns-prefetch" href="https://notifications.hackerrank.com/">
    <link rel="dns-prefetch" href="https://api.mixpanel.com/">
    <link rel="dns-prefetch" href="https://metrics.hackerrank.com/">
    <link rel="preconnect" href="https://sentry.io/">
    <link rel="dns-prefetch" href="https://sentry.io/">
  

  


  
    <link rel="stylesheet" type="text/css" href="./nama_files/hackerrank_libraries-6d1eda62f2.css"><link rel="stylesheet" type="text/css" href="./nama_files/hackerrank-core-b09922f4c9.css"><link rel="stylesheet" type="text/css" href="./nama_files/dashboard-173b5e46b8.css"><link rel="stylesheet" href="./nama_files/hackerrank_r_old_trimmed-a6cf77c6.css">
  

  
    <link rel="stylesheet" type="text/css" href="./nama_files/hackerrank_r_vendors_community_work-7cd49d89.css">
  
    <link rel="stylesheet" type="text/css" href="./nama_files/hackerrank_r_vendors_community-77bd1bfe.css">
  
    <link rel="stylesheet" type="text/css" href="./nama_files/hackerrank_r_modules_community_work_login_work-8dbf884b.css">
  
    <link rel="stylesheet" type="text/css" href="./nama_files/hackerrank_r_modules_custominput_community_work-a56650b6.css">
  
    <link rel="stylesheet" type="text/css" href="./nama_files/hackerrank_r_modules_community_work-2c1a008b.css">
  
    <link rel="stylesheet" type="text/css" href="./nama_files/hackerrank_r_commons_community_sourcing_applications-4457b86b.css">
  
    <link rel="stylesheet" type="text/css" href="./nama_files/hackerrank_r_commons_community_work-624f4342.css">
  
    <link rel="stylesheet" type="text/css" href="./nama_files/hackerrank_r_community-5a3ae3a6.css">
  
    <link rel="stylesheet" type="text/css" href="./nama_files/hackerrank_r_vendors_app-d94f867f.css">
  
    <link rel="stylesheet" type="text/css" href="./nama_files/hackerrank_r_modules_app-50af1f6b.css">
  
    <link rel="stylesheet" type="text/css" href="./nama_files/hackerrank_r_app-ce3777c3.css">
  
    <link rel="stylesheet" type="text/css" href="./nama_files/hackerrank_r_vendors_challenge-e06f8a9e.css">
  
    <link rel="stylesheet" type="text/css" href="./nama_files/hackerrank_r_modules_work_contest_challenge_leaderboardv2_leaderboard_scoring-0307838b.css">
  
    <link rel="stylesheet" type="text/css" href="./nama_files/hackerrank_r_modules_work_contest_challenge_leaderboardv2_leaderboard-a782fa9a.css">
  
    <link rel="stylesheet" type="text/css" href="./nama_files/hackerrank_r_modules_challenge_list_challenge_list_v2_challenge_interview-f86e1c75.css">
  
    <link rel="stylesheet" type="text/css" href="./nama_files/hackerrank_r_commons_challenge_list_challenge_list_v2_challenge_jobs_profile_v2_interview_singletest_library_teams-f3c6e8a9.css">
  
    <link rel="stylesheet" type="text/css" href="./nama_files/hackerrank_r_commons_challenge_list_challenge_list_v2_challenge_onboarding_profile_v2_interview-2e66d4a8.css">
  
    <link rel="stylesheet" type="text/css" href="./nama_files/hackerrank_r_commons_contest_challenge_leaderboardv2_forum_leaderboard-ff70f088.css">
  
    <link rel="stylesheet" type="text/css" href="./nama_files/hackerrank_r_commons_challenge_list_challenge_list_v2_challenge_interview-17288984.css">
  
    <link rel="stylesheet" type="text/css" href="./nama_files/hackerrank_r_commons_contest_challenge_leaderboardv2_leaderboard-85a0fb8f.css">
  
    <link rel="stylesheet" type="text/css" href="./nama_files/hackerrank_r_commons_challenge_onboarding-e093655d.css">
  
    <link rel="stylesheet" type="text/css" href="./nama_files/hackerrank_r_challenge-9e0d243e.css">
  
    <link rel="stylesheet" type="text/css" href="./nama_files/hackerrank_r_modules_work_contest_challenge_leaderboardv2_leaderboard_scoring-0307838b.css">
  
    <link rel="stylesheet" type="text/css" href="./nama_files/hackerrank_r_modules_work_contest_challenge_leaderboardv2_leaderboard-a782fa9a.css">
  
    <link rel="stylesheet" type="text/css" href="./nama_files/hackerrank_r_commons_contest_challenge_leaderboardv2_forum_leaderboard-ff70f088.css">
  
    <link rel="stylesheet" type="text/css" href="./nama_files/hackerrank_r_commons_contest_challenge_leaderboardv2_leaderboard-85a0fb8f.css">
  
    <link rel="stylesheet" type="text/css" href="./nama_files/hackerrank_r_commons_contest_leaderboardv2_leaderboard-187860eb.css">
  
    <link rel="stylesheet" type="text/css" href="./nama_files/hackerrank_r_contest-aedfb84e.css">
  

  <!-- Prefetch / preload assets on production -->
  

    <!-- preload scripts required on the same page -->
    <link rel="preload" as="script" href="./nama_files/hackerrank_r_vendor-740631685f.js.download">
    <link rel="preload" as="script" href="./nama_files/hackerrank_r_client-7d610062.js.download">
    <link rel="preload" as="script" href="./nama_files/runtime-54a5d0a6.js.download">

    
      <link rel="preload" as="script" href="./nama_files/hackerrank_r_modules_community_work_login_work-83e4d974.js.download">
    
      <link rel="preload" as="script" href="./nama_files/hackerrank_r_modules_custominput_community_work-2b0c6499.js.download">
    
      <link rel="preload" as="script" href="./nama_files/hackerrank_r_vendors_custominput_community_work-c41abfa7.js.download">
    
      <link rel="preload" as="script" href="./nama_files/hackerrank_r_vendors_lsp_client_community_work-43c3f13c.js.download">
    
      <link rel="preload" as="script" href="./nama_files/hackerrank_r_commons_community_sourcing_applications-e8ccc0d0.js.download">
    
      <link rel="preload" as="script" href="./nama_files/hackerrank_r_commons_community_work-4579a5f8.js.download">
    
      <link rel="preload" as="script" href="./nama_files/hackerrank_r_modules_community_work-6c34f55a.js.download">
    
      <link rel="preload" as="script" href="./nama_files/hackerrank_r_vendors_community_library-1c19d58c.js.download">
    
      <link rel="preload" as="script" href="./nama_files/hackerrank_r_vendors_community_work-49d00c54.js.download">
    
      <link rel="preload" as="script" href="./nama_files/hackerrank_r_community-597a3aaa.js.download">
    
      <link rel="preload" as="script" href="./nama_files/hackerrank_r_vendors_community-23a61dc3.js.download">
    
      <link rel="preload" as="script" href="./nama_files/hackerrank_r_app-71fdd146.js.download">
    
      <link rel="preload" as="script" href="./nama_files/hackerrank_r_modules_app-18548abf.js.download">
    
      <link rel="preload" as="script" href="./nama_files/hackerrank_r_vendors_app-8179fc12.js.download">
    
      <link rel="preload" as="script" href="./nama_files/hackerrank_r_commons_challenge_list_challenge_list_v2_challenge_jobs_profile_v2_interview_singletest_library_teams-f70a7588.js.download">
    
      <link rel="preload" as="script" href="./nama_files/hackerrank_r_vendors_work_challenge_list_challenge_list_v2_challenge_jobs_calendar_onboarding_scoring_interview-a645a940.js.download">
    
      <link rel="preload" as="script" href="./nama_files/hackerrank_r_commons_challenge_list_challenge_list_v2_challenge_onboarding_profile_v2_interview-2baefc34.js.download">
    
      <link rel="preload" as="script" href="./nama_files/hackerrank_r_modules_work_contest_challenge_leaderboardv2_leaderboard_scoring-b7b7014d.js.download">
    
      <link rel="preload" as="script" href="./nama_files/hackerrank_r_commons_contest_challenge_leaderboardv2_forum_leaderboard-f0ac7b1f.js.download">
    
      <link rel="preload" as="script" href="./nama_files/hackerrank_r_modules_work_contest_challenge_leaderboardv2_leaderboard-a883d982.js.download">
    
      <link rel="preload" as="script" href="./nama_files/hackerrank_r_commons_challenge_list_challenge_list_v2_challenge_interview-2e0a6fb9.js.download">
    
      <link rel="preload" as="script" href="./nama_files/hackerrank_r_commons_contest_challenge_leaderboardv2_leaderboard-60f30e76.js.download">
    
      <link rel="preload" as="script" href="./nama_files/hackerrank_r_modules_challenge_list_challenge_list_v2_challenge_interview-4249e957.js.download">
    
      <link rel="preload" as="script" href="./nama_files/hackerrank_r_commons_challenge_onboarding-cf2324b8.js.download">
    
      <link rel="preload" as="script" href="./nama_files/hackerrank_r_vendors_challenge_onboarding-06fd1348.js.download">
    
      <link rel="preload" as="script" href="./nama_files/hackerrank_r_challenge-9e0e1215.js.download">
    
      <link rel="preload" as="script" href="./nama_files/hackerrank_r_vendors_challenge-acbd1ce5.js.download">
    
      <link rel="preload" as="script" href="./nama_files/hackerrank_r_modules_work_contest_challenge_leaderboardv2_leaderboard_scoring-b7b7014d.js.download">
    
      <link rel="preload" as="script" href="./nama_files/hackerrank_r_commons_contest_challenge_leaderboardv2_forum_leaderboard-f0ac7b1f.js.download">
    
      <link rel="preload" as="script" href="./nama_files/hackerrank_r_modules_work_contest_challenge_leaderboardv2_leaderboard-a883d982.js.download">
    
      <link rel="preload" as="script" href="./nama_files/hackerrank_r_commons_contest_challenge_leaderboardv2_leaderboard-60f30e76.js.download">
    
      <link rel="preload" as="script" href="./nama_files/hackerrank_r_commons_contest_leaderboardv2_leaderboard-6b7f48e7.js.download">
    
      <link rel="preload" as="script" href="./nama_files/hackerrank_r_contest-08ef6a1b.js.download">
    
    <!-- preload scripts end -->

    <!-- Prefetch old css files -->
    <link rel="prefetch" href="./nama_files/hackerrank-core-b09922f4c9.css">
    <link rel="prefetch" href="./nama_files/hackerrank_libraries-6d1eda62f2.css">

    
      <link rel="prefetch" href="./nama_files/dashboard-173b5e46b8.css">
    
    <!-- Prefetch old css files end -->

  

  <!-- Load promise polyfill for the non-believers -->
  <script>
    window.Promise || document.write('<script src="https://hrcdn.net/fcore/assets/polyfill-d05a380d50.min.js" type="text\/javascript"><\/script>');
  </script>
  <!-- Added for GTM -->
  <!-- GTM setup -->

<script>
  dataLayer = [];
  window.jsTrackGoogleAnalytics = window.jsTrackGoogleAnalytics || function () {};
</script>

<!-- Google Tag Manager #1 -->
<script>(function(w,d,s,l,i){w[l]=w[l]||[];w[l].push({'gtm.start':
new Date().getTime(),event:'gtm.js'});var f=d.getElementsByTagName(s)[0],
j=d.createElement(s),dl=l!='dataLayer'?'&l='+l:'';j.async=true;j.src=
'https://www.googletagmanager.com/gtm.js?id='+i+dl;f.parentNode.insertBefore(j,f);
})(window,document,'script','dataLayer', 'GTM-NZTBQVZ');</script>
<!-- End Google Tag Manager 1 -->



<script charset="utf-8" src="./nama_files/hackerrank_r_modules_app-18548abf.js.download"></script><script charset="utf-8" src="./nama_files/custominput-67e48ccf.js.download"></script><script charset="utf-8" src="./nama_files/hackerrank_r_vendors_app-8179fc12.js.download"></script><script charset="utf-8" src="./nama_files/hackerrank_r_app-71fdd146.js.download"></script><script charset="utf-8" src="./nama_files/hackerrank_r_modules_community_work_login_work-83e4d974.js.download"></script><script charset="utf-8" src="./nama_files/hackerrank_r_modules_custominput_community_work-2b0c6499.js.download"></script><script charset="utf-8" src="./nama_files/hackerrank_r_modules_community_work-6c34f55a.js.download"></script><script charset="utf-8" src="./nama_files/hackerrank_r_vendors_custominput_community_work-c41abfa7.js.download"></script><script charset="utf-8" src="./nama_files/hackerrank_r_vendors_lsp_client_community_work-43c3f13c.js.download"></script><script charset="utf-8" src="./nama_files/hackerrank_r_vendors_community_work-49d00c54.js.download"></script><script charset="utf-8" src="./nama_files/hackerrank_r_vendors_community_library-1c19d58c.js.download"></script><script charset="utf-8" src="./nama_files/hackerrank_r_vendors_community-23a61dc3.js.download"></script><script charset="utf-8" src="./nama_files/hackerrank_r_commons_community_work-4579a5f8.js.download"></script><script charset="utf-8" src="./nama_files/hackerrank_r_commons_community_sourcing_applications-e8ccc0d0.js.download"></script><script charset="utf-8" src="./nama_files/hackerrank_r_community-597a3aaa.js.download"></script><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_challenge_list-cd19436b.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_vendors~challenge_list~challenge_list_v2~jobs~scoring~interview-d58c7118.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_commons~challenge_list~challenge_list_v2~interview-99c48f3b.js"><link rel="prefetch" href="./nama_files/hackerrank_r_modules_challenge_list_challenge_list_v2_challenge_interview-f86e1c75.css"><link rel="prefetch" href="./nama_files/hackerrank_r_commons_challenge_list_challenge_list_v2_challenge_jobs_profile_v2_interview_singletest_library_teams-f3c6e8a9.css"><link rel="prefetch" href="./nama_files/hackerrank_r_commons_challenge_list_challenge_list_v2_challenge_onboarding_profile_v2_interview-2e66d4a8.css"><link rel="prefetch" href="./nama_files/hackerrank_r_commons_challenge_list_challenge_list_v2_challenge_interview-17288984.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_commons~challenge_list~challenge_list_v2~interview-372e1a1f.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_challenge_list-2acdc86c.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_challenge_list_v2-3d95e81c.js"><link rel="prefetch" href="./nama_files/hackerrank_r_forum-bf9f4db7.js.download"><link rel="prefetch" href="./nama_files/hackerrank_r_vendors_forum-7314572f.js.download"><link rel="prefetch" href="./nama_files/hackerrank_r_vendors_forum-67bc1117.css"><link rel="prefetch" href="./nama_files/hackerrank_r_commons_contest_challenge_leaderboardv2_forum_leaderboard-ff70f088.css"><link rel="prefetch" href="./nama_files/hackerrank_r_forum-90adaffc.css"><link rel="prefetch" href="./nama_files/hackerrank_r_vendors_challenge-e06f8a9e.css"><link rel="prefetch" href="./nama_files/hackerrank_r_modules_work_contest_challenge_leaderboardv2_leaderboard_scoring-0307838b.css"><link rel="prefetch" href="./nama_files/hackerrank_r_modules_work_contest_challenge_leaderboardv2_leaderboard-a782fa9a.css"><link rel="prefetch" href="./nama_files/hackerrank_r_commons_contest_challenge_leaderboardv2_leaderboard-85a0fb8f.css"><link rel="prefetch" href="./nama_files/hackerrank_r_commons_challenge_onboarding-e093655d.css"><link rel="prefetch" href="./nama_files/hackerrank_r_challenge-9e0d243e.css"><link rel="prefetch" href="./nama_files/hackerrank_r_commons_contest_leaderboardv2_leaderboard-187860eb.css"><link rel="prefetch" href="./nama_files/hackerrank_r_contest-aedfb84e.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_leaderboardv2-337028bb.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_leaderboardv2-f8fa54fa.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_dashboard-ad34514b.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_commons~dashboard~jobs-817ab42b.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_modules~dashboard~jobs-000334b6.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_modules~dashboard~jobs-87f0cfa7.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_commons~dashboard~jobs-189d431f.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_dashboard-571906cf.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_leaderboard-7106031d.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_leaderboard-ea28662f.css"><style>
html.scroll-hidden,html.scroll-hidden body{
  overflow: hidden;
  height:100vh;
}
html.scroll-hidden.pad-adjustment body{
    padding-right : 14px;
}
html.scroll-hidden.pad-adjustment .fixed-elm{
    padding-right : 14px;
}</style><script charset="utf-8" src="./nama_files/hackerrank_r_old_trimmed-e0266e1a.js.download"></script><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_survey-7a8123d5.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_modules~work~survey~jobs~profile_v2-acbfdee6.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_vendors~work~survey~jobs~profile_v2-ea5baad2.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_commons~survey~profile_v2-c55a992a.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_modules~survey-9fa2c27b.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_modules~work~survey~jobs~profile_v2-3fdf9a84.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_modules~survey-73800615.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_commons~survey~profile_v2-da49af1f.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_survey-2a92ec87.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_company_header-411a4d99.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_company_header-45420057.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_jobs-a0e56dee.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_commons~jobs~sourcing_applications~sourcing_messages-405b3626.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_vendors~jobs~testinvite~testsettings-4517df8d.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_commons~jobs~sourcing_messages-21fbd59d.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_commons~work~jobs-ce48fb56.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_vendors~jobs~testquestions-0dc69dec.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_modules~jobs-f63f1a14.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_modules~sourcing_company_jobs-a9ec9f89.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_sourcing_company_jobs-9d8574cf.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_vendors~jobs-94a367d8.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_vendors~jobs-02f99fc1.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_modules~jobs-2baf50ac.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_modules~sourcing_company_jobs-01390d3e.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_commons~jobs~sourcing_applications~sourcing_messages-0fd72235.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_commons~jobs~sourcing_messages-02ab6f87.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_commons~work~jobs-4d152608.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_jobs-e5efdf85.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_sourcing_company_jobs-f3cdaea7.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_profile_v2-c6a3d48c.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_modules~profile_v2-3d66e37f.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_vendors~profile_v2-60655413.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_modules~profile_v2-85f5247d.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_profile_v2-2a7aef3f.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_calendar-52a8deba.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_vendors~calendar-70e2b86a.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_calendar-92a8872d.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_onboarding-378c8026.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_modules~onboarding-65580ce3.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_modules~onboarding-2325cccf.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_onboarding-2599e4ab.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_charts-35c181e1.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_charts-c7b27294.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_scoring-728c1477.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_scoring-d423b13f.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_interview-ca0d8e5d.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_vendors~interview-ba6898a2.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_vendors~interview-87f0cfa7.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_interview-fea1ab3f.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_auth-ed4cdd7c.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_auth-fe83bc2d.css"><link rel="prefetch" href="./nama_files/hackerrank_r_krackjack-0b72d9a9.js.download"><link rel="prefetch" href="./nama_files/hackerrank_r_modules_krackjack-41fad11e.js.download"><link rel="prefetch" href="./nama_files/hackerrank_r_vendors_krackjack-d674cd2f.js.download"><link rel="prefetch" href="./nama_files/hackerrank_r_vendors_krackjack-f804e5be.css"><link rel="prefetch" href="./nama_files/hackerrank_r_modules_krackjack-7446df2c.css"><script charset="utf-8" src="./nama_files/hackerrank_r_modules_work_contest_challenge_leaderboardv2_leaderboard_scoring-b7b7014d.js.download"></script><script charset="utf-8" src="./nama_files/hackerrank_r_modules_work_contest_challenge_leaderboardv2_leaderboard-a883d982.js.download"></script><script charset="utf-8" src="./nama_files/hackerrank_r_modules_challenge_list_challenge_list_v2_challenge_interview-4249e957.js.download"></script><script charset="utf-8" src="./nama_files/hackerrank_r_vendors_work_challenge_list_challenge_list_v2_challenge_jobs_calendar_onboarding_scoring_interview-a645a940.js.download"></script><script charset="utf-8" src="./nama_files/hackerrank_r_vendors_challenge_onboarding-06fd1348.js.download"></script><script charset="utf-8" src="./nama_files/hackerrank_r_vendors_challenge-acbd1ce5.js.download"></script><script charset="utf-8" src="./nama_files/hackerrank_r_commons_challenge_list_challenge_list_v2_challenge_jobs_profile_v2_interview_singletest_library_teams-f70a7588.js.download"></script><script charset="utf-8" src="./nama_files/hackerrank_r_commons_challenge_list_challenge_list_v2_challenge_onboarding_profile_v2_interview-2baefc34.js.download"></script><script charset="utf-8" src="./nama_files/hackerrank_r_commons_contest_challenge_leaderboardv2_forum_leaderboard-f0ac7b1f.js.download"></script><script charset="utf-8" src="./nama_files/hackerrank_r_commons_challenge_list_challenge_list_v2_challenge_interview-2e0a6fb9.js.download"></script><script charset="utf-8" src="./nama_files/hackerrank_r_commons_contest_challenge_leaderboardv2_leaderboard-60f30e76.js.download"></script><script charset="utf-8" src="./nama_files/hackerrank_r_commons_challenge_onboarding-cf2324b8.js.download"></script><script charset="utf-8" src="./nama_files/hackerrank_r_challenge-9e0e1215.js.download"></script><script charset="utf-8" src="./nama_files/hackerrank_r_commons_contest_leaderboardv2_leaderboard-6b7f48e7.js.download"></script><script charset="utf-8" src="./nama_files/hackerrank_r_contest-08ef6a1b.js.download"></script><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_codeshell_lib-2e9e58ef.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_vendors~codeshell_lib-22ca8496.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/codeshell_editor_theme_m-75dea2ee.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/codeshell_editor_theme_m-e1f6afe2.css"><link rel="stylesheet" type="text/css" href="./nama_files/hackerrank_r_modules_krackjack-7446df2c.css"><script charset="utf-8" src="./nama_files/hackerrank_r_modules_krackjack-41fad11e.js.download"></script><link rel="stylesheet" type="text/css" href="./nama_files/hackerrank_r_vendors_krackjack-f804e5be.css"><script charset="utf-8" src="./nama_files/hackerrank_r_vendors_krackjack-d674cd2f.js.download"></script><script charset="utf-8" src="./nama_files/hackerrank_r_krackjack-0b72d9a9.js.download"></script><style type="text/css" media="screen" class="monaco-colors">.monaco-editor .accessibilityHelpWidget { background-color: #efeff2; }
.monaco-editor .accessibilityHelpWidget { box-shadow: 0 2px 8px #a8a8a8; }
.monaco-editor, .monaco-editor-background, .monaco-editor .inputarea.ime-input { background-color: #fffffe; }
.monaco-editor, .monaco-editor .inputarea.ime-input { color: #000000; }
.monaco-editor .margin { background-color: #fffffe; }
.monaco-editor .rangeHighlight { background-color: rgba(253, 255, 0, 0.2); }
.vs-whitespace { color: rgba(51, 51, 51, 0.2) !important; }
.monaco-editor .bracket-match { background-color: rgba(0, 100, 0, 0.1); }
.monaco-editor .bracket-match { border: 1px solid #b9b9b9; }
.monaco-editor .monaco-editor-overlaymessage .anchor { border-top-color: #007acc; }
.monaco-editor .monaco-editor-overlaymessage .message { border: 1px solid #007acc; }
.monaco-editor .monaco-editor-overlaymessage .message { background-color: #d6ecf2; }
.monaco-editor .codelens-decoration { color: #999999; }
.monaco-editor .codelens-decoration > a:hover { color: #0000ff !important; }
.monaco-editor .findMatch { background-color: rgba(234, 92, 0, 0.33); }
.monaco-editor .currentFindMatch { background-color: #a8ac94; }
.monaco-editor .findScope { background-color: rgba(180, 180, 180, 0.3); }
.monaco-editor .find-widget { background-color: #efeff2; }
.monaco-editor .find-widget { box-shadow: 0 2px 8px #a8a8a8; }
.monaco-editor .find-widget.no-results .matchesCount { color: #a1260d; }
.monaco-editor .find-widget .monaco-sash { background-color: #c8c8c8; width: 3px !important; margin-left: -4px;}
.monaco-editor .findOptionsWidget { background-color: #efeff2; }
.monaco-editor .findOptionsWidget { box-shadow: 0 2px 8px #a8a8a8; }
.monaco-editor .line-numbers { color: #237893; }
.monaco-editor .current-line ~ .line-numbers { color: #0b216f; }
.monaco-editor .view-overlays .current-line { background-color: #eaf2fe; }
.monaco-editor .margin-view-overlays .current-line-margin { background-color: #eaf2fe; border: none; }
.monaco-editor .lines-content .cigr { box-shadow: 1px 0 0 0 #d3d3d3 inset; }
.monaco-editor .lines-content .cigra { box-shadow: 1px 0 0 0 #939393 inset; }
.monaco-editor .view-ruler { box-shadow: 1px 0 0 0 #d3d3d3 inset; }
.monaco-editor .scroll-decoration { box-shadow: #dddddd 0 6px 6px -6px inset; }
.monaco-editor .focused .selected-text { background-color: #add6ff; }
.monaco-editor .selected-text { background-color: #e5ebf1; }
.monaco-editor .cursor { background-color: #000000; border-color: #000000; color: #ffffff; }
.monaco-editor .minimap-slider, .monaco-editor .minimap-slider .minimap-slider-horizontal { background: rgba(100, 100, 100, 0.2); }
.monaco-editor .minimap-slider:hover, .monaco-editor .minimap-slider:hover .minimap-slider-horizontal { background: rgba(100, 100, 100, 0.35); }
.monaco-editor .minimap-slider.active, .monaco-editor .minimap-slider.active .minimap-slider-horizontal { background: rgba(0, 0, 0, 0.3); }
.monaco-editor .minimap-shadow-visible { box-shadow: #dddddd -6px 0 6px -6px inset; }
.monaco-editor .squiggly-error { background: url("data:image/svg+xml,%3Csvg%20xmlns%3D'http%3A%2F%2Fwww.w3.org%2F2000%2Fsvg'%20viewBox%3D'0%200%206%203'%20enable-background%3D'new%200%200%206%203'%20height%3D'3'%20width%3D'6'%3E%3Cg%20fill%3D'%23d60a0a'%3E%3Cpolygon%20points%3D'5.5%2C0%202.5%2C3%201.1%2C3%204.1%2C0'%2F%3E%3Cpolygon%20points%3D'4%2C0%206%2C2%206%2C0.6%205.4%2C0'%2F%3E%3Cpolygon%20points%3D'0%2C2%201%2C3%202.4%2C3%200%2C0.6'%2F%3E%3C%2Fg%3E%3C%2Fsvg%3E") repeat-x bottom left; }
.monaco-editor .squiggly-warning { background: url("data:image/svg+xml,%3Csvg%20xmlns%3D'http%3A%2F%2Fwww.w3.org%2F2000%2Fsvg'%20viewBox%3D'0%200%206%203'%20enable-background%3D'new%200%200%206%203'%20height%3D'3'%20width%3D'6'%3E%3Cg%20fill%3D'%23117711'%3E%3Cpolygon%20points%3D'5.5%2C0%202.5%2C3%201.1%2C3%204.1%2C0'%2F%3E%3Cpolygon%20points%3D'4%2C0%206%2C2%206%2C0.6%205.4%2C0'%2F%3E%3Cpolygon%20points%3D'0%2C2%201%2C3%202.4%2C3%200%2C0.6'%2F%3E%3C%2Fg%3E%3C%2Fsvg%3E") repeat-x bottom left; }
.monaco-editor .squiggly-info { background: url("data:image/svg+xml,%3Csvg%20xmlns%3D'http%3A%2F%2Fwww.w3.org%2F2000%2Fsvg'%20viewBox%3D'0%200%206%203'%20enable-background%3D'new%200%200%206%203'%20height%3D'3'%20width%3D'6'%3E%3Cg%20fill%3D'%23008000'%3E%3Cpolygon%20points%3D'5.5%2C0%202.5%2C3%201.1%2C3%204.1%2C0'%2F%3E%3Cpolygon%20points%3D'4%2C0%206%2C2%206%2C0.6%205.4%2C0'%2F%3E%3Cpolygon%20points%3D'0%2C2%201%2C3%202.4%2C3%200%2C0.6'%2F%3E%3C%2Fg%3E%3C%2Fsvg%3E") repeat-x bottom left; }
.monaco-editor .squiggly-hint { background: url("data:image/svg+xml,%3Csvg%20xmlns%3D%22http%3A%2F%2Fwww.w3.org%2F2000%2Fsvg%22%20height%3D%223%22%20width%3D%2212%22%3E%3Cg%20fill%3D%22%236c6c6c%22%3E%3Ccircle%20cx%3D%221%22%20cy%3D%221%22%20r%3D%221%22%2F%3E%3Ccircle%20cx%3D%225%22%20cy%3D%221%22%20r%3D%221%22%2F%3E%3Ccircle%20cx%3D%229%22%20cy%3D%221%22%20r%3D%221%22%2F%3E%3C%2Fg%3E%3C%2Fsvg%3E") no-repeat bottom left; }
.showUnused .monaco-editor .squiggly-inline-unnecessary { opacity: 0.467; will-change: opacity; }
.monaco-editor .reference-zone-widget .ref-tree .referenceMatch { background-color: rgba(234, 92, 0, 0.3); }
.monaco-editor .reference-zone-widget .preview .reference-decoration { background-color: rgba(245, 216, 2, 0.87); }
.monaco-editor .reference-zone-widget .ref-tree { background-color: #f3f3f3; }
.monaco-editor .reference-zone-widget .ref-tree { color: #646465; }
.monaco-editor .reference-zone-widget .ref-tree .reference-file { color: #1e1e1e; }
.monaco-editor .reference-zone-widget .ref-tree .monaco-tree.focused .monaco-tree-rows > .monaco-tree-row.selected:not(.highlighted) { background-color: rgba(51, 153, 255, 0.2); }
.monaco-editor .reference-zone-widget .ref-tree .monaco-tree.focused .monaco-tree-rows > .monaco-tree-row.selected:not(.highlighted) { color: #6c6c6c !important; }
.monaco-editor .reference-zone-widget .preview .monaco-editor .monaco-editor-background,.monaco-editor .reference-zone-widget .preview .monaco-editor .inputarea.ime-input {	background-color: #f2f8fc;}
.monaco-editor .reference-zone-widget .preview .monaco-editor .margin {	background-color: #f2f8fc;}
.monaco-editor .goto-definition-link { color: #0000ff !important; }
.monaco-editor .hoverHighlight { background-color: rgba(173, 214, 255, 0.15); }
.monaco-editor .monaco-editor-hover { background-color: #efeff2; }
.monaco-editor .monaco-editor-hover { border: 1px solid #c8c8c8; }
.monaco-editor .monaco-editor-hover .hover-row:not(:first-child):not(:empty) { border-top: 1px solid rgba(200, 200, 200, 0.5); }
.monaco-editor .monaco-editor-hover a { color: #006ab1; }
.monaco-editor .monaco-editor-hover code { background-color: rgba(220, 220, 220, 0.4); }
.monaco-editor.vs .valueSetReplacement { outline: solid 2px #b9b9b9; }
.monaco-editor .tokens-inspect-widget { border: 1px solid #c8c8c8; }
.monaco-editor .tokens-inspect-widget .tokens-inspect-separator { background-color: #c8c8c8; }
.monaco-editor .tokens-inspect-widget { background-color: #efeff2; }
.monaco-editor .detected-link-active { color: #0000ff !important; }
.monaco-editor .parameter-hints-widget { border: 1px solid #c8c8c8; }
.monaco-editor .parameter-hints-widget.multiple .body { border-left: 1px solid rgba(200, 200, 200, 0.5); }
.monaco-editor .parameter-hints-widget .signature.has-docs { border-bottom: 1px solid rgba(200, 200, 200, 0.5); }
.monaco-editor .parameter-hints-widget { background-color: #efeff2; }
.monaco-editor .parameter-hints-widget a { color: #006ab1; }
.monaco-editor .parameter-hints-widget code { background-color: rgba(220, 220, 220, 0.4); }
.monaco-editor .suggest-widget .monaco-list .monaco-list-row .monaco-highlighted-label .highlight { color: #007acc; }
.monaco-editor .suggest-widget { color: #000000; }
.monaco-editor .suggest-widget a { color: #006ab1; }
.monaco-editor .suggest-widget code { background-color: rgba(220, 220, 220, 0.4); }
.monaco-editor .focused .selectionHighlight { background-color: rgba(173, 214, 255, 0.3); }
.monaco-editor .selectionHighlight { background-color: rgba(173, 214, 255, 0.15); }
.monaco-editor .wordHighlight { background-color: rgba(87, 87, 87, 0.25); }
.monaco-editor .wordHighlightStrong { background-color: rgba(14, 99, 156, 0.25); }
.monaco-diff-editor .diff-review-line-number { color: #237893; }
.monaco-diff-editor .diff-review-shadow { box-shadow: #dddddd 0 -6px 6px -6px inset; }
.monaco-editor .line-insert, .monaco-editor .char-insert { background-color: rgba(155, 185, 85, 0.2); }
.monaco-diff-editor .line-insert, .monaco-diff-editor .char-insert { background-color: rgba(155, 185, 85, 0.2); }
.monaco-editor .inline-added-margin-view-zone { background-color: rgba(155, 185, 85, 0.2); }
.monaco-editor .line-delete, .monaco-editor .char-delete { background-color: rgba(255, 0, 0, 0.2); }
.monaco-diff-editor .line-delete, .monaco-diff-editor .char-delete { background-color: rgba(255, 0, 0, 0.2); }
.monaco-editor .inline-deleted-margin-view-zone { background-color: rgba(255, 0, 0, 0.2); }
.monaco-diff-editor.side-by-side .editor.modified { box-shadow: -6px 0 5px -5px #dddddd; }

.mtk1 { color: #000000; }
.mtk2 { color: #fffffe; }
.mtk3 { color: #808080; }
.mtk4 { color: #ff0000; }
.mtk5 { color: #0451a5; }
.mtk6 { color: #0000ff; }
.mtk7 { color: #09885a; }
.mtk8 { color: #008000; }
.mtk9 { color: #dd0000; }
.mtk10 { color: #383838; }
.mtk11 { color: #cd3131; }
.mtk12 { color: #863b00; }
.mtk13 { color: #af00db; }
.mtk14 { color: #800000; }
.mtk15 { color: #e00000; }
.mtk16 { color: #3030c0; }
.mtk17 { color: #666666; }
.mtk18 { color: #778899; }
.mtk19 { color: #ff00ff; }
.mtk20 { color: #608b4e; }
.mtk21 { color: #a31515; }
.mtk22 { color: #4f76ac; }
.mtk23 { color: #008080; }
.mtk24 { color: #001188; }
.mtk25 { color: #4864aa; }
.mtki { font-style: italic; }
.mtkb { font-weight: bold; }
.mtku { text-decoration: underline; text-underline-position: under; }</style><script charset="utf-8" src="./nama_files/hackerrank_r_vendors_unknown-chunk-42d919e9.js.download"></script><style type="text/css" media="screen"></style><script charset="utf-8" src="./nama_files/lsp_client-d9b642ee.js.download"></script><link rel="stylesheet" type="text/css" href="./nama_files/hackerrank_r_vendors_forum-67bc1117.css"><script charset="utf-8" src="./nama_files/hackerrank_r_vendors_forum-7314572f.js.download"></script><link rel="stylesheet" type="text/css" href="./nama_files/hackerrank_r_forum-90adaffc.css"><script charset="utf-8" src="./nama_files/hackerrank_r_forum-bf9f4db7.js.download"></script><link rel="stylesheet" href="./nama_files/font-awesome.min.css"><title> Video Conference | HackerRank </title><meta property="og:title" id="meta-og-title" content="Video Conference | HackerRank"><meta name="twitter:title" id="meta-twitter-title" content="Video Conference | HackerRank"><meta property="og:url" id="meta-og-url" content="https://www.hackerrank.com/contests/hourrank-30/challenges/video-conference/problem"><meta name="twitter:url" id="meta-twitter-url" content="https://www.hackerrank.com/contests/hourrank-30/challenges/video-conference/problem"></head>
<body id="hr_v2" class="hr-community" data-gr-c-s-loaded="true">
  <div id="fb-root"></div>
  

  <!-- Just a placeholder div to start loading open sans and source code loader -->
  <div class="font-open-sans-loader"></div>
  <div class="font-source-code-loader"></div>
  <!-- Just a placeholder div to start loading open sans and source code loader end -->

  <div id="content" onclick="void(0);"><div class="ui-kit-root"><div class="body-wrap community-page contests-page contest-page challenges-page problem-page show-cookie-banner"><div class="toast toast--loading"><div class="d-flex align-items-center"><svg viewBox="0 0 24 24" width="1em" height="1em" class="toast__icon toast__icon--animated ui-svg-icon" fill="currentColor"><path d="M12 7c-.6 0-1-.4-1-1V2c0-.6.4-1 1-1s1 .4 1 1v4c0 .6-.4 1-1 1zm0 16c-.6 0-1-.4-1-1v-4c0-.6.4-1 1-1s1 .4 1 1v4c0 .6-.4 1-1 1zM7.8 8.8c-.3 0-.5-.1-.7-.3L4.2 5.6c-.4-.4-.4-1 0-1.4s1-.4 1.4 0L8.4 7c.4.4.4 1 0 1.4-.1.3-.4.4-.6.4zm11.3 11.3c-.3 0-.5-.1-.7-.3L15.6 17c-.4-.4-.4-1 0-1.4s1-.4 1.4 0l2.8 2.8c.4.4.4 1 0 1.4-.2.2-.5.3-.7.3zM6 13H2c-.6 0-1-.4-1-1s.4-1 1-1h4c.6 0 1 .4 1 1s-.4 1-1 1zm16 0h-4c-.6 0-1-.4-1-1s.4-1 1-1h4c.6 0 1 .4 1 1s-.4 1-1 1zM4.9 20.1c-.3 0-.5-.1-.7-.3-.4-.4-.4-1 0-1.4L7 15.6c.4-.4 1-.4 1.4 0s.4 1 0 1.4l-2.8 2.8c-.2.2-.4.3-.7.3zM16.2 8.8c-.3 0-.5-.1-.7-.3-.4-.4-.4-1 0-1.4l2.8-2.8c.4-.4 1-.4 1.4 0s.4 1 0 1.4l-2.8 2.8c-.1.2-.4.3-.7.3z"></path></svg><span class="toast__message">Loading...</span></div></div><div class="theme-m new-design logged-user"><div class="page-header-wrapper theme-m-section"><nav class="community-header"><div class="container"><div class="header-nav-links theme-m-section"><ul class="nav-links"><li class="nav-link-item logo-wrap"><a class="nav_link backbone logo_mark js_logo_mark logo-link" data-analytics="NavBarLogo" data-attr1="/dashboard" href="https://www.hackerrank.com/dashboard"><img id="feed-intro" class="logo-img-small" src="./nama_files/h_mark_sm-966d2b45e3.svg" alt=""></a></li><li class="nav-link-item"><a class="nav-link dashboard" data-analytics="NavBarDomains" href="https://www.hackerrank.com/dashboard"><span>Practice</span></a></li><li class="nav-link-item"><a class="nav-link contests active" data-analytics="NavBarContests" href="https://www.hackerrank.com/contests"><span>Compete</span></a></li><li class="nav-link-item"><a class="nav-link" data-analytics="NavBarJobs" href="https://www.hackerrank.com/jobs"><span>Jobs</span><i class="ui-icon-circle-filled notification-indicator hidden"></i></a></li><li class="nav-link-item"><a class="nav-link" data-analytics="NavBarLeaderboard" id="leaderboard-nav-link" href="https://www.hackerrank.com/leaderboard"><span>Leaderboard</span></a></li></ul></div><div class="nav-buttons theme-m-section"><ul class="pull-left psR"><li class="hide-in-private-contest search-input-container input-icon main-hr-search" id="search-span"><div class="search-form new-search"><div><div class="search-query asyn-autocomplete autocomplete"><div class="ac-input-wrap cf"><input autocomplete="off" class="ac-input " value="" placeholder="Search"></div></div><i class="ui-icon-search"></i></div></div></li></ul><ul class="pull-left nav-wrap mmL"><li class="hide-in-private-contest button-item"><div class="dropdown dropdown message-dropdown notify-dropdown theme-m-content"><a class="cursor dropdown-handle nav_link hr_nav_messages_link js-dropdown-toggle js-link" data-analytics="NavBarMessageIcon"><i class="dropdown-icon ui-icon-message"></i></a><div class="dropdown-menu large"><header class="psT psB text-center menu-header"><strong class="header-title">Messages</strong></header><div id="notify_messages" class="dropdown-body"><div class="hr_nav_messages_list"><div class="no-propagation text-center txt-navy empty-msg">You have no unread messages.</div></div></div><footer class="final text-center show-all"><a class="btn show-all-link" href="https://www.hackerrank.com/inbox" data-analytics="NavBarMessageShowAll">Show All</a></footer></div></div></li><li class="button-item"><div class="dropdown dropdown notification-dropdown notify-dropdown theme-m-content"><a class="cursor dropdown-handle nav_link hr_nav_notifications_link js-dropdown-toggle js-link" data-toggle="dropdown" data-analytics="NavBarNotificationsIcon"><i class="dropdown-icon ui-icon-notification"></i><span class="indicator number-indicator hr_notifications_count">1</span></a><div class="dropdown-menu large" id="notify_broadcasts"><header class="psA menu-header"><strong class="header-title">Notifications</strong><a class="hr_archive_all archive pull-right js-link" data-analytics="NavBarNotificationsArchiveAll"><i class="icon-folder-open"></i>Archive All</a></header><div class="clearfix dropdown-body"><div class="hr_nav_notifications_list"><ul><li class="notify_item dropdown-item cursor" data-id="73277185" data-category="contest-announcements" data-url="/domains/tutorials/30-days-of-code"><div class="notification-icon"><img src="./nama_files/notifymarker-4be6d5a4c8.png"></div><div class="notification-subject pmT"><div class="psA"><div>Improve your coding skills. Join our 30 Days of Code challenge!</div><small class="meta"><time class="time-text" datetime="2019-03-10T09:11:21.000Z" title="2019-03-10 09:11">6 months ago</time></small></div></div></li></ul></div></div><footer class="final show-all"><a class="btn show-all-link" href="https://www.hackerrank.com/notifications" data-analytics="NavBarNotificationsShowAll">Show All</a></footer></div></div></li><li class="button-item"><div class="dropdown dropdown dropdown-auth profile-menu cursor theme-m-content"><a class="backbone nav_link js-dropdown-toggle js-link toggle-wrap" data-analytics="NavBarProfileDropDown"><i class="ui-icon-user default-user-icon"></i><span class="mmR username text-ellipsis">setetesairlaut</span><i class="ui-icon-chevron-down down-icon"></i></a><div class="dropdown-menu drop-list pull-right"><ul><li class="hide-in-private-contest profile-nav-item"><a class="navigation_hackos hackos-count" data-analytics="NavBarProfileDropDownHackos" href="https://www.hackerrank.com/setetesairlaut/hackos">Hackos: <span class="navigation_hackos-count">159</span></a></li><li class="hide-in-private-contest profile-nav-item"><a rel="tooltip" data-placement="left" data-analytics="NavBarProfileDropDownProfile" href="https://www.hackerrank.com/setetesairlaut">Profile<div class="ui-progress-bar progress-bar theme-default"><div class="progress-filler" style="width:30%"></div></div></a></li><li class="hide-in-private-contest profile-nav-item"><a href="https://www.hackerrank.com/settings" data-analytics="NavBarProfileDropDownSettings">Settings</a></li><li class="hide-in-private-contest profile-nav-item"><a href="https://www.hackerrank.com/challenges/bookmarks" data-analytics="NavBarDropDownBookmarks">Bookmarks</a></li><li class="hide-in-private-contest profile-nav-item"><a href="https://www.hackerrank.com/network" data-analytics="NavBarProfileDropDownNetwork">Network</a></li><li class="hide-in-private-contest profile-nav-item"><a href="https://www.hackerrank.com/submissions" data-analytics="NavBarProfileDropDownSubmissions">Submissions</a></li><li class="hide-in-private-contest profile-nav-item"><a href="https://www.hackerrank.com/administration" data-analytics="NavBarProfileDropDownAdministration">Administration</a></li><li class="profile-nav-item"><a class="logout-button js-link" data-analytics="NavBarProfileDropDownLogout">Logout</a></li></ul></div></div></li></ul></div></div></nav></div><header class="community-header-breadcrumb"><div class="container"><div class="d-flex justify-content-between align-items-center content-header-wrapper"><div class="community-header-breadcrumb-items"><ol itemtype="http://schema.org/BreadcrumbList" class="community-breadcrumb text-content ellipsis"><li itemprop="itemListElement" itemtype="http://schema.org/ListItem" class="breadcrumb-item"><a itemprop="item" class="breadcrumb-link" data-analytics="Breadcrumb" data-attr1="All Contests" data-attr2="global" data-attr7="1" href="https://www.hackerrank.com/contests"><span itemprop="name" class="breadcrumb-item-text">All Contests</span></a><meta itemprop="position" content="1"></li><li itemprop="itemListElement" itemtype="http://schema.org/ListItem" class="breadcrumb-item"><span class="ui-icon-chevron-right mmL mmR chevron-icon"></span><a itemprop="item" class="breadcrumb-link" data-analytics="Breadcrumb" data-attr1="HourRank 30" data-attr2="global" data-attr7="1" href="https://www.hackerrank.com/contests/hourrank-30/challenges"><span itemprop="name" class="breadcrumb-item-text">HourRank 30</span></a><meta itemprop="position" content="1"></li><li itemprop="itemListElement" itemtype="http://schema.org/ListItem" class="breadcrumb-item"><span class="ui-icon-chevron-right mmL mmR chevron-icon"></span><span itemprop="name" class="breadcrumb-item-text">Video Conference</span><meta itemprop="position" content="1"></li></ol><div class="page-label-wrapper text-headline"><h1 class="page-label"><div class="challenge-page-label-wrapper align-items-center"><h1 class="ui-icon-label page-label">Video Conference<span data-balloon="Any further submissions will not be considered for leaderboard." data-balloon-pos="up"><i class="ui-icon-lock" aria-label="Lock icon"></i></span></h1></div></h1></div></div><div class="community-header-aside"><div class="contest-timer-wrapper"><div class="contest-status"></div></div></div></div></div></header><div class="container"></div><div class="community-content"><div class="challenge-view theme-m"><div class="challenge-page-header container"><div class="ui-tabs-wrap"><div class="render-list clearfix"><ul class="tab-header"><li id="Problem" class="tab-item active"><a class="tab-item-color" data-analytics="ChallengeViewTab" data-attr1="/contests/hourrank-30/challenges/video-conference/problem" data-attr2="Problem" data-attr3="no_full_screen" href="https://www.hackerrank.com/contests/hourrank-30/challenges/video-conference/problem"><span class="ui-icon-label">Problem</span></a></li><li id="Submissions" class="tab-item"><a class="tab-item-color" data-analytics="ChallengeViewTab" data-attr1="/contests/hourrank-30/challenges/video-conference/submissions" data-attr2="Submissions" data-attr3="no_full_screen" href="https://www.hackerrank.com/contests/hourrank-30/challenges/video-conference/submissions"><span class="ui-icon-label">Submissions</span></a></li><li id="Leaderboard" class="tab-item"><a class="tab-item-color" data-analytics="ChallengeViewTab" data-attr1="/contests/hourrank-30/challenges/video-conference/leaderboard" data-attr2="Leaderboard" data-attr3="no_full_screen" href="https://www.hackerrank.com/contests/hourrank-30/challenges/video-conference/leaderboard"><span class="ui-icon-label">Leaderboard</span></a></li><li id="Discussions" class="tab-item"><a class="tab-item-color" data-analytics="ChallengeViewTab" data-attr1="/contests/hourrank-30/challenges/video-conference/forum" data-attr2="Discussions" data-attr3="no_full_screen" href="https://www.hackerrank.com/contests/hourrank-30/challenges/video-conference/forum"><span class="ui-icon-label">Discussions</span></a></li><li id="Editorial" class="tab-item"><a class="tab-item-color" data-analytics="ChallengeViewTab" data-attr1="/contests/hourrank-30/challenges/video-conference/editorial" data-attr2="Editorial" data-attr3="no_full_screen" href="https://www.hackerrank.com/contests/hourrank-30/challenges/video-conference/editorial"><span class="ui-icon-label">Editorial</span><i class="ui-icon-lock"></i></a></li></ul></div></div></div><section class="challenge-interface challenge-problem"><div class="challenge-body"><div class="challenge-body-elements-problem challenge-container-element"><div class="container challenge-page-wrap panes-container theme-m-content"><div class="full-screen-split split-wrap left-pane"><section class="problem-statement split"><div class="ui-tabs-wrap"><div class="tab-list-content"><div class="theme-m hr_tour-problem-statement problem-statement have-external-links"><div class="content-text challenge-text mlB hackdown-container theme-m"><div class="challenge-body-html"><div class="challenge_problem_statement"><div class="msB challenge_problem_statement_body"><div class="hackdown-content"><style id="MathJax_SVG_styles">.MathJax_SVG_Display {text-align: center; margin: 1em 0em; position: relative; display: block!important; text-indent: 0; max-width: none; max-height: none; min-width: 0; min-height: 0; width: 100%}
.MathJax_SVG .MJX-monospace {font-family: monospace}
.MathJax_SVG .MJX-sans-serif {font-family: sans-serif}
.MathJax_SVG {display: inline; font-style: normal; font-weight: normal; line-height: normal; font-size: 100%; font-size-adjust: none; text-indent: 0; text-align: left; text-transform: none; letter-spacing: normal; word-spacing: normal; word-wrap: normal; white-space: nowrap; float: none; direction: ltr; max-width: none; max-height: none; min-width: 0; min-height: 0; border: 0; padding: 0; margin: 0}
.MathJax_SVG * {transition: none; -webkit-transition: none; -moz-transition: none; -ms-transition: none; -o-transition: none}
.mjx-svg-href {fill: blue; stroke: blue}
.MathJax_SVG_LineBox {display: table!important}
.MathJax_SVG_LineBox span {display: table-cell!important; width: 10000em!important; min-width: 0; max-width: none; padding: 0; border: 0; margin: 0}
</style><svg style="display: none;"><defs id="MathJax_SVG_glyphs"></defs></svg><p>Bob is making a video conference software. Whenever a new person joins the conference, Bob displays the person's name in the interface.</p>

<p>However, displaying full name is tedious and takes much space. So he decided to display the shortest prefix which doesn't match with any prefix of any person who has joined earlier.</p>

<p>Let's suppose the first person to enter the conference is <code>alvin</code>. </p>

<p><img src="./nama_files/1515332893-646e16b636-Conference.png" alt="image" title=""></p>

<p>Now suppose next person to join is <code>alice</code>. The shortest prefix of <code>alice</code> that doesn't match with any prefix of <code>alvin</code> is <code>ali</code>.</p>

<p><img src="./nama_files/1515333247-8470db87c2-Conference1.png" alt="image" title=""></p>

<p>If the full name of a new person matches completely with the full name of any person who has joined earlier, he will display the full name and add a suffix which indicates how many times the same name has occurred in the list so far. For example, if another person name <code>alvin</code> joins, the list will look like this:</p>

<p><img src="./nama_files/1515333466-436385cc1b-Conference2.png" alt="image" title=""></p>

<p>You are given the list of the persons who have joined the call in the chronological order. Your task is to figure out how the final list looks like.</p></div></div></div><div class="challenge_input_format"><div class="msB challenge_input_format_title"><p><strong>Input Format</strong></p></div><div class="msB challenge_input_format_body"><div class="hackdown-content"><style id="MathJax_SVG_styles">.MathJax_SVG_Display {text-align: center; margin: 1em 0em; position: relative; display: block!important; text-indent: 0; max-width: none; max-height: none; min-width: 0; min-height: 0; width: 100%}
.MathJax_SVG .MJX-monospace {font-family: monospace}
.MathJax_SVG .MJX-sans-serif {font-family: sans-serif}
.MathJax_SVG {display: inline; font-style: normal; font-weight: normal; line-height: normal; font-size: 100%; font-size-adjust: none; text-indent: 0; text-align: left; text-transform: none; letter-spacing: normal; word-spacing: normal; word-wrap: normal; white-space: nowrap; float: none; direction: ltr; max-width: none; max-height: none; min-width: 0; min-height: 0; border: 0; padding: 0; margin: 0}
.MathJax_SVG * {transition: none; -webkit-transition: none; -moz-transition: none; -ms-transition: none; -o-transition: none}
.mjx-svg-href {fill: blue; stroke: blue}
.MathJax_SVG_LineBox {display: table!important}
.MathJax_SVG_LineBox span {display: table-cell!important; width: 10000em!important; min-width: 0; max-width: none; padding: 0; border: 0; margin: 0}
</style><svg style="display: none;"><defs id="MathJax_SVG_glyphs"></defs></svg><p>The first line contains an integer <span style="font-size: 100%; display: inline-block;" class="MathJax_SVG" id="MathJax-Element-1-Frame"><svg xmlns:xlink="http://www.w3.org/1999/xlink" width="1.395ex" height="1.676ex" style="vertical-align: -0.338ex;" viewBox="0 -576.1 600.5 721.6" role="img" focusable="false"><g stroke="currentColor" fill="currentColor" stroke-width="0" transform="matrix(1 0 0 -1 0 0)"><path stroke-width="1" d="M21 287Q22 293 24 303T36 341T56 388T89 425T135 442Q171 442 195 424T225 390T231 369Q231 367 232 367L243 378Q304 442 382 442Q436 442 469 415T503 336T465 179T427 52Q427 26 444 26Q450 26 453 27Q482 32 505 65T540 145Q542 153 560 153Q580 153 580 145Q580 144 576 130Q568 101 554 73T508 17T439 -10Q392 -10 371 17T350 73Q350 92 386 193T423 345Q423 404 379 404H374Q288 404 229 303L222 291L189 157Q156 26 151 16Q138 -11 108 -11Q95 -11 87 -5T76 7T74 17Q74 30 112 180T152 343Q153 348 153 366Q153 405 129 405Q91 405 66 305Q60 285 60 284Q58 278 41 278H27Q21 284 21 287Z"></path></g></svg></span>. </p>

<p>The subsequent <span style="font-size: 100%; display: inline-block;" class="MathJax_SVG" id="MathJax-Element-2-Frame"><svg xmlns:xlink="http://www.w3.org/1999/xlink" width="1.395ex" height="1.676ex" style="vertical-align: -0.338ex;" viewBox="0 -576.1 600.5 721.6" role="img" focusable="false"><g stroke="currentColor" fill="currentColor" stroke-width="0" transform="matrix(1 0 0 -1 0 0)"><path stroke-width="1" d="M21 287Q22 293 24 303T36 341T56 388T89 425T135 442Q171 442 195 424T225 390T231 369Q231 367 232 367L243 378Q304 442 382 442Q436 442 469 415T503 336T465 179T427 52Q427 26 444 26Q450 26 453 27Q482 32 505 65T540 145Q542 153 560 153Q580 153 580 145Q580 144 576 130Q568 101 554 73T508 17T439 -10Q392 -10 371 17T350 73Q350 92 386 193T423 345Q423 404 379 404H374Q288 404 229 303L222 291L189 157Q156 26 151 16Q138 -11 108 -11Q95 -11 87 -5T76 7T74 17Q74 30 112 180T152 343Q153 348 153 366Q153 405 129 405Q91 405 66 305Q60 285 60 284Q58 278 41 278H27Q21 284 21 287Z"></path></g></svg></span> line contains a string <span style="font-size: 100%; display: inline-block;" class="MathJax_SVG" id="MathJax-Element-3-Frame"><svg xmlns:xlink="http://www.w3.org/1999/xlink" width="1.89ex" height="2.009ex" style="vertical-align: -0.671ex;" viewBox="0 -576.1 813.8 865.1" role="img" focusable="false"><g stroke="currentColor" fill="currentColor" stroke-width="0" transform="matrix(1 0 0 -1 0 0)"><path stroke-width="1" d="M131 289Q131 321 147 354T203 415T300 442Q362 442 390 415T419 355Q419 323 402 308T364 292Q351 292 340 300T328 326Q328 342 337 354T354 372T367 378Q368 378 368 379Q368 382 361 388T336 399T297 405Q249 405 227 379T204 326Q204 301 223 291T278 274T330 259Q396 230 396 163Q396 135 385 107T352 51T289 7T195 -10Q118 -10 86 19T53 87Q53 126 74 143T118 160Q133 160 146 151T160 120Q160 94 142 76T111 58Q109 57 108 57T107 55Q108 52 115 47T146 34T201 27Q237 27 263 38T301 66T318 97T323 122Q323 150 302 164T254 181T195 196T148 231Q131 256 131 289Z"></path><g transform="translate(469,-150)"><path stroke-width="1" transform="scale(0.707)" d="M184 600Q184 624 203 642T247 661Q265 661 277 649T290 619Q290 596 270 577T226 557Q211 557 198 567T184 600ZM21 287Q21 295 30 318T54 369T98 420T158 442Q197 442 223 419T250 357Q250 340 236 301T196 196T154 83Q149 61 149 51Q149 26 166 26Q175 26 185 29T208 43T235 78T260 137Q263 149 265 151T282 153Q302 153 302 143Q302 135 293 112T268 61T223 11T161 -11Q129 -11 102 10T74 74Q74 91 79 106T122 220Q160 321 166 341T173 380Q173 404 156 404H154Q124 404 99 371T61 287Q60 286 59 284T58 281T56 279T53 278T49 278T41 278H27Q21 284 21 287Z"></path></g></g></svg></span> denoting the name of the <span style="font-size: 100%; display: inline-block;" class="MathJax_SVG" id="MathJax-Element-4-Frame"><svg xmlns:xlink="http://www.w3.org/1999/xlink" width="2.575ex" height="2.509ex" style="vertical-align: -0.338ex;" viewBox="0 -934.9 1108.8 1080.4" role="img" focusable="false"><g stroke="currentColor" fill="currentColor" stroke-width="0" transform="matrix(1 0 0 -1 0 0)"><path stroke-width="1" d="M184 600Q184 624 203 642T247 661Q265 661 277 649T290 619Q290 596 270 577T226 557Q211 557 198 567T184 600ZM21 287Q21 295 30 318T54 369T98 420T158 442Q197 442 223 419T250 357Q250 340 236 301T196 196T154 83Q149 61 149 51Q149 26 166 26Q175 26 185 29T208 43T235 78T260 137Q263 149 265 151T282 153Q302 153 302 143Q302 135 293 112T268 61T223 11T161 -11Q129 -11 102 10T74 74Q74 91 79 106T122 220Q160 321 166 341T173 380Q173 404 156 404H154Q124 404 99 371T61 287Q60 286 59 284T58 281T56 279T53 278T49 278T41 278H27Q21 284 21 287Z"></path><g transform="translate(345,362)"><path stroke-width="1" transform="scale(0.707)" d="M26 385Q19 392 19 395Q19 399 22 411T27 425Q29 430 36 430T87 431H140L159 511Q162 522 166 540T173 566T179 586T187 603T197 615T211 624T229 626Q247 625 254 615T261 596Q261 589 252 549T232 470L222 433Q222 431 272 431H323Q330 424 330 420Q330 398 317 385H210L174 240Q135 80 135 68Q135 26 162 26Q197 26 230 60T283 144Q285 150 288 151T303 153H307Q322 153 322 145Q322 142 319 133Q314 117 301 95T267 48T216 6T155 -11Q125 -11 98 4T59 56Q57 64 57 83V101L92 241Q127 382 128 383Q128 385 77 385H26Z"></path><g transform="translate(255,0)"><path stroke-width="1" transform="scale(0.707)" d="M137 683Q138 683 209 688T282 694Q294 694 294 685Q294 674 258 534Q220 386 220 383Q220 381 227 388Q288 442 357 442Q411 442 444 415T478 336Q478 285 440 178T402 50Q403 36 407 31T422 26Q450 26 474 56T513 138Q516 149 519 151T535 153Q555 153 555 145Q555 144 551 130Q535 71 500 33Q466 -10 419 -10H414Q367 -10 346 17T325 74Q325 90 361 192T398 345Q398 404 354 404H349Q266 404 205 306L198 293L164 158Q132 28 127 16Q114 -11 83 -11Q69 -11 59 -2T48 16Q48 30 121 320L195 616Q195 629 188 632T149 637H128Q122 643 122 645T124 664Q129 683 137 683Z"></path></g></g></g></svg></span> person to join the call.</p></div></div></div><div class="challenge_constraints"><div class="msB challenge_constraints_title"><p><strong>Constraints</strong></p></div><div class="msB challenge_constraints_body"><div class="hackdown-content"><style id="MathJax_SVG_styles">.MathJax_SVG_Display {text-align: center; margin: 1em 0em; position: relative; display: block!important; text-indent: 0; max-width: none; max-height: none; min-width: 0; min-height: 0; width: 100%}
.MathJax_SVG .MJX-monospace {font-family: monospace}
.MathJax_SVG .MJX-sans-serif {font-family: sans-serif}
.MathJax_SVG {display: inline; font-style: normal; font-weight: normal; line-height: normal; font-size: 100%; font-size-adjust: none; text-indent: 0; text-align: left; text-transform: none; letter-spacing: normal; word-spacing: normal; word-wrap: normal; white-space: nowrap; float: none; direction: ltr; max-width: none; max-height: none; min-width: 0; min-height: 0; border: 0; padding: 0; margin: 0}
.MathJax_SVG * {transition: none; -webkit-transition: none; -moz-transition: none; -ms-transition: none; -o-transition: none}
.mjx-svg-href {fill: blue; stroke: blue}
.MathJax_SVG_LineBox {display: table!important}
.MathJax_SVG_LineBox span {display: table-cell!important; width: 10000em!important; min-width: 0; max-width: none; padding: 0; border: 0; margin: 0}
</style><svg style="display: none;"><defs id="MathJax_SVG_glyphs"></defs></svg><ul>
<li><span style="font-size: 100%; display: inline-block;" class="MathJax_SVG" id="MathJax-Element-1-Frame"><svg xmlns:xlink="http://www.w3.org/1999/xlink" width="12.133ex" height="2.843ex" style="vertical-align: -0.505ex;" viewBox="0 -1006.6 5224 1223.9" role="img" focusable="false"><g stroke="currentColor" fill="currentColor" stroke-width="0" transform="matrix(1 0 0 -1 0 0)"><path stroke-width="1" d="M213 578L200 573Q186 568 160 563T102 556H83V602H102Q149 604 189 617T245 641T273 663Q275 666 285 666Q294 666 302 660V361L303 61Q310 54 315 52T339 48T401 46H427V0H416Q395 3 257 3Q121 3 100 0H88V46H114Q136 46 152 46T177 47T193 50T201 52T207 57T213 61V578Z"></path><g transform="translate(778,0)"><path stroke-width="1" d="M674 636Q682 636 688 630T694 615T687 601Q686 600 417 472L151 346L399 228Q687 92 691 87Q694 81 694 76Q694 58 676 56H670L382 192Q92 329 90 331Q83 336 83 348Q84 359 96 365Q104 369 382 500T665 634Q669 636 674 636ZM84 -118Q84 -108 99 -98H678Q694 -104 694 -118Q694 -130 679 -138H98Q84 -131 84 -118Z"></path></g><g transform="translate(1834,0)"><path stroke-width="1" d="M21 287Q22 293 24 303T36 341T56 388T89 425T135 442Q171 442 195 424T225 390T231 369Q231 367 232 367L243 378Q304 442 382 442Q436 442 469 415T503 336T465 179T427 52Q427 26 444 26Q450 26 453 27Q482 32 505 65T540 145Q542 153 560 153Q580 153 580 145Q580 144 576 130Q568 101 554 73T508 17T439 -10Q392 -10 371 17T350 73Q350 92 386 193T423 345Q423 404 379 404H374Q288 404 229 303L222 291L189 157Q156 26 151 16Q138 -11 108 -11Q95 -11 87 -5T76 7T74 17Q74 30 112 180T152 343Q153 348 153 366Q153 405 129 405Q91 405 66 305Q60 285 60 284Q58 278 41 278H27Q21 284 21 287Z"></path></g><g transform="translate(2712,0)"><path stroke-width="1" d="M674 636Q682 636 688 630T694 615T687 601Q686 600 417 472L151 346L399 228Q687 92 691 87Q694 81 694 76Q694 58 676 56H670L382 192Q92 329 90 331Q83 336 83 348Q84 359 96 365Q104 369 382 500T665 634Q669 636 674 636ZM84 -118Q84 -108 99 -98H678Q694 -104 694 -118Q694 -130 679 -138H98Q84 -131 84 -118Z"></path></g><g transform="translate(3769,0)"><path stroke-width="1" d="M213 578L200 573Q186 568 160 563T102 556H83V602H102Q149 604 189 617T245 641T273 663Q275 666 285 666Q294 666 302 660V361L303 61Q310 54 315 52T339 48T401 46H427V0H416Q395 3 257 3Q121 3 100 0H88V46H114Q136 46 152 46T177 47T193 50T201 52T207 57T213 61V578Z"></path><path stroke-width="1" d="M96 585Q152 666 249 666Q297 666 345 640T423 548Q460 465 460 320Q460 165 417 83Q397 41 362 16T301 -15T250 -22Q224 -22 198 -16T137 16T82 83Q39 165 39 320Q39 494 96 585ZM321 597Q291 629 250 629Q208 629 178 597Q153 571 145 525T137 333Q137 175 145 125T181 46Q209 16 250 16Q290 16 318 46Q347 76 354 130T362 333Q362 478 354 524T321 597Z" transform="translate(500,0)"></path><g transform="translate(1001,393)"><path stroke-width="1" transform="scale(0.707)" d="M164 157Q164 133 148 117T109 101H102Q148 22 224 22Q294 22 326 82Q345 115 345 210Q345 313 318 349Q292 382 260 382H254Q176 382 136 314Q132 307 129 306T114 304Q97 304 95 310Q93 314 93 485V614Q93 664 98 664Q100 666 102 666Q103 666 123 658T178 642T253 634Q324 634 389 662Q397 666 402 666Q410 666 410 648V635Q328 538 205 538Q174 538 149 544L139 546V374Q158 388 169 396T205 412T256 420Q337 420 393 355T449 201Q449 109 385 44T229 -22Q148 -22 99 32T50 154Q50 178 61 192T84 210T107 214Q132 214 148 197T164 157Z"></path></g></g></g></svg></span></li>
<li><span style="font-size: 100%; display: inline-block;" class="MathJax_SVG" id="MathJax-Element-2-Frame"><svg xmlns:xlink="http://www.w3.org/1999/xlink" width="11.574ex" height="2.509ex" style="vertical-align: -0.671ex;" viewBox="0 -791.3 4983.4 1080.4" role="img" focusable="false"><g stroke="currentColor" fill="currentColor" stroke-width="0" transform="matrix(1 0 0 -1 0 0)"><path stroke-width="1" d="M213 578L200 573Q186 568 160 563T102 556H83V602H102Q149 604 189 617T245 641T273 663Q275 666 285 666Q294 666 302 660V361L303 61Q310 54 315 52T339 48T401 46H427V0H416Q395 3 257 3Q121 3 100 0H88V46H114Q136 46 152 46T177 47T193 50T201 52T207 57T213 61V578Z"></path><g transform="translate(778,0)"><path stroke-width="1" d="M674 636Q682 636 688 630T694 615T687 601Q686 600 417 472L151 346L399 228Q687 92 691 87Q694 81 694 76Q694 58 676 56H670L382 192Q92 329 90 331Q83 336 83 348Q84 359 96 365Q104 369 382 500T665 634Q669 636 674 636ZM84 -118Q84 -108 99 -98H678Q694 -104 694 -118Q694 -130 679 -138H98Q84 -131 84 -118Z"></path></g><g transform="translate(1834,0)"><path stroke-width="1" d="M131 289Q131 321 147 354T203 415T300 442Q362 442 390 415T419 355Q419 323 402 308T364 292Q351 292 340 300T328 326Q328 342 337 354T354 372T367 378Q368 378 368 379Q368 382 361 388T336 399T297 405Q249 405 227 379T204 326Q204 301 223 291T278 274T330 259Q396 230 396 163Q396 135 385 107T352 51T289 7T195 -10Q118 -10 86 19T53 87Q53 126 74 143T118 160Q133 160 146 151T160 120Q160 94 142 76T111 58Q109 57 108 57T107 55Q108 52 115 47T146 34T201 27Q237 27 263 38T301 66T318 97T323 122Q323 150 302 164T254 181T195 196T148 231Q131 256 131 289Z"></path><g transform="translate(469,-150)"><path stroke-width="1" transform="scale(0.707)" d="M184 600Q184 624 203 642T247 661Q265 661 277 649T290 619Q290 596 270 577T226 557Q211 557 198 567T184 600ZM21 287Q21 295 30 318T54 369T98 420T158 442Q197 442 223 419T250 357Q250 340 236 301T196 196T154 83Q149 61 149 51Q149 26 166 26Q175 26 185 29T208 43T235 78T260 137Q263 149 265 151T282 153Q302 153 302 143Q302 135 293 112T268 61T223 11T161 -11Q129 -11 102 10T74 74Q74 91 79 106T122 220Q160 321 166 341T173 380Q173 404 156 404H154Q124 404 99 371T61 287Q60 286 59 284T58 281T56 279T53 278T49 278T41 278H27Q21 284 21 287Z"></path></g></g><g transform="translate(2926,0)"><path stroke-width="1" d="M674 636Q682 636 688 630T694 615T687 601Q686 600 417 472L151 346L399 228Q687 92 691 87Q694 81 694 76Q694 58 676 56H670L382 192Q92 329 90 331Q83 336 83 348Q84 359 96 365Q104 369 382 500T665 634Q669 636 674 636ZM84 -118Q84 -108 99 -98H678Q694 -104 694 -118Q694 -130 679 -138H98Q84 -131 84 -118Z"></path></g><g transform="translate(3982,0)"><path stroke-width="1" d="M213 578L200 573Q186 568 160 563T102 556H83V602H102Q149 604 189 617T245 641T273 663Q275 666 285 666Q294 666 302 660V361L303 61Q310 54 315 52T339 48T401 46H427V0H416Q395 3 257 3Q121 3 100 0H88V46H114Q136 46 152 46T177 47T193 50T201 52T207 57T213 61V578Z"></path><path stroke-width="1" d="M96 585Q152 666 249 666Q297 666 345 640T423 548Q460 465 460 320Q460 165 417 83Q397 41 362 16T301 -15T250 -22Q224 -22 198 -16T137 16T82 83Q39 165 39 320Q39 494 96 585ZM321 597Q291 629 250 629Q208 629 178 597Q153 571 145 525T137 333Q137 175 145 125T181 46Q209 16 250 16Q290 16 318 46Q347 76 354 130T362 333Q362 478 354 524T321 597Z" transform="translate(500,0)"></path></g></g></svg></span></li>
<li><span style="font-size: 100%; display: inline-block;" class="MathJax_SVG" id="MathJax-Element-3-Frame"><svg xmlns:xlink="http://www.w3.org/1999/xlink" width="1.89ex" height="2.009ex" style="vertical-align: -0.671ex;" viewBox="0 -576.1 813.8 865.1" role="img" focusable="false"><g stroke="currentColor" fill="currentColor" stroke-width="0" transform="matrix(1 0 0 -1 0 0)"><path stroke-width="1" d="M131 289Q131 321 147 354T203 415T300 442Q362 442 390 415T419 355Q419 323 402 308T364 292Q351 292 340 300T328 326Q328 342 337 354T354 372T367 378Q368 378 368 379Q368 382 361 388T336 399T297 405Q249 405 227 379T204 326Q204 301 223 291T278 274T330 259Q396 230 396 163Q396 135 385 107T352 51T289 7T195 -10Q118 -10 86 19T53 87Q53 126 74 143T118 160Q133 160 146 151T160 120Q160 94 142 76T111 58Q109 57 108 57T107 55Q108 52 115 47T146 34T201 27Q237 27 263 38T301 66T318 97T323 122Q323 150 302 164T254 181T195 196T148 231Q131 256 131 289Z"></path><g transform="translate(469,-150)"><path stroke-width="1" transform="scale(0.707)" d="M184 600Q184 624 203 642T247 661Q265 661 277 649T290 619Q290 596 270 577T226 557Q211 557 198 567T184 600ZM21 287Q21 295 30 318T54 369T98 420T158 442Q197 442 223 419T250 357Q250 340 236 301T196 196T154 83Q149 61 149 51Q149 26 166 26Q175 26 185 29T208 43T235 78T260 137Q263 149 265 151T282 153Q302 153 302 143Q302 135 293 112T268 61T223 11T161 -11Q129 -11 102 10T74 74Q74 91 79 106T122 220Q160 321 166 341T173 380Q173 404 156 404H154Q124 404 99 371T61 287Q60 286 59 284T58 281T56 279T53 278T49 278T41 278H27Q21 284 21 287Z"></path></g></g></svg></span> will contain only lower-case english letters.</li>
</ul>

<p><strong>Subtask</strong></p>

<ul>
<li><span style="font-size: 100%; display: inline-block;" class="MathJax_SVG" id="MathJax-Element-4-Frame"><svg xmlns:xlink="http://www.w3.org/1999/xlink" width="13.404ex" height="2.343ex" style="vertical-align: -0.505ex;" viewBox="0 -791.3 5771.1 1008.6" role="img" focusable="false"><g stroke="currentColor" fill="currentColor" stroke-width="0" transform="matrix(1 0 0 -1 0 0)"><path stroke-width="1" d="M213 578L200 573Q186 568 160 563T102 556H83V602H102Q149 604 189 617T245 641T273 663Q275 666 285 666Q294 666 302 660V361L303 61Q310 54 315 52T339 48T401 46H427V0H416Q395 3 257 3Q121 3 100 0H88V46H114Q136 46 152 46T177 47T193 50T201 52T207 57T213 61V578Z"></path><g transform="translate(778,0)"><path stroke-width="1" d="M674 636Q682 636 688 630T694 615T687 601Q686 600 417 472L151 346L399 228Q687 92 691 87Q694 81 694 76Q694 58 676 56H670L382 192Q92 329 90 331Q83 336 83 348Q84 359 96 365Q104 369 382 500T665 634Q669 636 674 636ZM84 -118Q84 -108 99 -98H678Q694 -104 694 -118Q694 -130 679 -138H98Q84 -131 84 -118Z"></path></g><g transform="translate(1834,0)"><path stroke-width="1" d="M21 287Q22 293 24 303T36 341T56 388T89 425T135 442Q171 442 195 424T225 390T231 369Q231 367 232 367L243 378Q304 442 382 442Q436 442 469 415T503 336T465 179T427 52Q427 26 444 26Q450 26 453 27Q482 32 505 65T540 145Q542 153 560 153Q580 153 580 145Q580 144 576 130Q568 101 554 73T508 17T439 -10Q392 -10 371 17T350 73Q350 92 386 193T423 345Q423 404 379 404H374Q288 404 229 303L222 291L189 157Q156 26 151 16Q138 -11 108 -11Q95 -11 87 -5T76 7T74 17Q74 30 112 180T152 343Q153 348 153 366Q153 405 129 405Q91 405 66 305Q60 285 60 284Q58 278 41 278H27Q21 284 21 287Z"></path></g><g transform="translate(2712,0)"><path stroke-width="1" d="M674 636Q682 636 688 630T694 615T687 601Q686 600 417 472L151 346L399 228Q687 92 691 87Q694 81 694 76Q694 58 676 56H670L382 192Q92 329 90 331Q83 336 83 348Q84 359 96 365Q104 369 382 500T665 634Q669 636 674 636ZM84 -118Q84 -108 99 -98H678Q694 -104 694 -118Q694 -130 679 -138H98Q84 -131 84 -118Z"></path></g><g transform="translate(3769,0)"><path stroke-width="1" d="M213 578L200 573Q186 568 160 563T102 556H83V602H102Q149 604 189 617T245 641T273 663Q275 666 285 666Q294 666 302 660V361L303 61Q310 54 315 52T339 48T401 46H427V0H416Q395 3 257 3Q121 3 100 0H88V46H114Q136 46 152 46T177 47T193 50T201 52T207 57T213 61V578Z"></path><path stroke-width="1" d="M96 585Q152 666 249 666Q297 666 345 640T423 548Q460 465 460 320Q460 165 417 83Q397 41 362 16T301 -15T250 -22Q224 -22 198 -16T137 16T82 83Q39 165 39 320Q39 494 96 585ZM321 597Q291 629 250 629Q208 629 178 597Q153 571 145 525T137 333Q137 175 145 125T181 46Q209 16 250 16Q290 16 318 46Q347 76 354 130T362 333Q362 478 354 524T321 597Z" transform="translate(500,0)"></path><path stroke-width="1" d="M96 585Q152 666 249 666Q297 666 345 640T423 548Q460 465 460 320Q460 165 417 83Q397 41 362 16T301 -15T250 -22Q224 -22 198 -16T137 16T82 83Q39 165 39 320Q39 494 96 585ZM321 597Q291 629 250 629Q208 629 178 597Q153 571 145 525T137 333Q137 175 145 125T181 46Q209 16 250 16Q290 16 318 46Q347 76 354 130T362 333Q362 478 354 524T321 597Z" transform="translate(1001,0)"></path><path stroke-width="1" d="M96 585Q152 666 249 666Q297 666 345 640T423 548Q460 465 460 320Q460 165 417 83Q397 41 362 16T301 -15T250 -22Q224 -22 198 -16T137 16T82 83Q39 165 39 320Q39 494 96 585ZM321 597Q291 629 250 629Q208 629 178 597Q153 571 145 525T137 333Q137 175 145 125T181 46Q209 16 250 16Q290 16 318 46Q347 76 354 130T362 333Q362 478 354 524T321 597Z" transform="translate(1501,0)"></path></g></g></svg></span> for <span style="font-size: 100%; display: inline-block;" class="MathJax_SVG" id="MathJax-Element-5-Frame"><svg xmlns:xlink="http://www.w3.org/1999/xlink" width="4.261ex" height="2.343ex" style="vertical-align: -0.338ex;" viewBox="0 -863.1 1834.5 1008.6" role="img" focusable="false"><g stroke="currentColor" fill="currentColor" stroke-width="0" transform="matrix(1 0 0 -1 0 0)"><path stroke-width="1" d="M42 313Q42 476 123 571T303 666Q372 666 402 630T432 550Q432 525 418 510T379 495Q356 495 341 509T326 548Q326 592 373 601Q351 623 311 626Q240 626 194 566Q147 500 147 364L148 360Q153 366 156 373Q197 433 263 433H267Q313 433 348 414Q372 400 396 374T435 317Q456 268 456 210V192Q456 169 451 149Q440 90 387 34T253 -22Q225 -22 199 -14T143 16T92 75T56 172T42 313ZM257 397Q227 397 205 380T171 335T154 278T148 216Q148 133 160 97T198 39Q222 21 251 21Q302 21 329 59Q342 77 347 104T352 209Q352 289 347 316T329 361Q302 397 257 397Z"></path><path stroke-width="1" d="M96 585Q152 666 249 666Q297 666 345 640T423 548Q460 465 460 320Q460 165 417 83Q397 41 362 16T301 -15T250 -22Q224 -22 198 -16T137 16T82 83Q39 165 39 320Q39 494 96 585ZM321 597Q291 629 250 629Q208 629 178 597Q153 571 145 525T137 333Q137 175 145 125T181 46Q209 16 250 16Q290 16 318 46Q347 76 354 130T362 333Q362 478 354 524T321 597Z" transform="translate(500,0)"></path><g transform="translate(1001,0)"><path stroke-width="1" d="M465 605Q428 605 394 614T340 632T319 641Q332 608 332 548Q332 458 293 403T202 347Q145 347 101 402T56 548Q56 637 101 693T202 750Q241 750 272 719Q359 642 464 642Q580 642 650 732Q662 748 668 749Q670 750 673 750Q682 750 688 743T693 726Q178 -47 170 -52Q166 -56 160 -56Q147 -56 142 -45Q137 -36 142 -27Q143 -24 363 304Q469 462 525 546T581 630Q528 605 465 605ZM207 385Q235 385 263 427T292 548Q292 617 267 664T200 712Q193 712 186 709T167 698T147 668T134 615Q132 595 132 548V527Q132 436 165 403Q183 385 203 385H207ZM500 146Q500 234 544 290T647 347Q699 347 737 292T776 146T737 0T646 -56Q590 -56 545 0T500 146ZM651 -18Q679 -18 707 24T736 146Q736 215 711 262T644 309Q637 309 630 306T611 295T591 265T578 212Q577 200 577 146V124Q577 -18 647 -18H651Z"></path></g></g></svg></span> of the maximum score</li>
</ul></div></div></div><div class="challenge_output_format"><div class="msB challenge_output_format_title"><p><strong>Output Format</strong></p></div><div class="msB challenge_output_format_body"><div class="hackdown-content"><style id="MathJax_SVG_styles">.MathJax_SVG_Display {text-align: center; margin: 1em 0em; position: relative; display: block!important; text-indent: 0; max-width: none; max-height: none; min-width: 0; min-height: 0; width: 100%}
.MathJax_SVG .MJX-monospace {font-family: monospace}
.MathJax_SVG .MJX-sans-serif {font-family: sans-serif}
.MathJax_SVG {display: inline; font-style: normal; font-weight: normal; line-height: normal; font-size: 100%; font-size-adjust: none; text-indent: 0; text-align: left; text-transform: none; letter-spacing: normal; word-spacing: normal; word-wrap: normal; white-space: nowrap; float: none; direction: ltr; max-width: none; max-height: none; min-width: 0; min-height: 0; border: 0; padding: 0; margin: 0}
.MathJax_SVG * {transition: none; -webkit-transition: none; -moz-transition: none; -ms-transition: none; -o-transition: none}
.mjx-svg-href {fill: blue; stroke: blue}
.MathJax_SVG_LineBox {display: table!important}
.MathJax_SVG_LineBox span {display: table-cell!important; width: 10000em!important; min-width: 0; max-width: none; padding: 0; border: 0; margin: 0}
</style><svg style="display: none;"><defs id="MathJax_SVG_glyphs"></defs></svg><p>Return a string array with <span style="font-size: 100%; display: inline-block;" class="MathJax_SVG" id="MathJax-Element-1-Frame"><svg xmlns:xlink="http://www.w3.org/1999/xlink" width="1.395ex" height="1.676ex" style="vertical-align: -0.338ex;" viewBox="0 -576.1 600.5 721.6" role="img" focusable="false"><g stroke="currentColor" fill="currentColor" stroke-width="0" transform="matrix(1 0 0 -1 0 0)"><path stroke-width="1" d="M21 287Q22 293 24 303T36 341T56 388T89 425T135 442Q171 442 195 424T225 390T231 369Q231 367 232 367L243 378Q304 442 382 442Q436 442 469 415T503 336T465 179T427 52Q427 26 444 26Q450 26 453 27Q482 32 505 65T540 145Q542 153 560 153Q580 153 580 145Q580 144 576 130Q568 101 554 73T508 17T439 -10Q392 -10 371 17T350 73Q350 92 386 193T423 345Q423 404 379 404H374Q288 404 229 303L222 291L189 157Q156 26 151 16Q138 -11 108 -11Q95 -11 87 -5T76 7T74 17Q74 30 112 180T152 343Q153 348 153 366Q153 405 129 405Q91 405 66 305Q60 285 60 284Q58 278 41 278H27Q21 284 21 287Z"></path></g></svg></span> items, the <span style="font-size: 100%; display: inline-block;" class="MathJax_SVG" id="MathJax-Element-2-Frame"><svg xmlns:xlink="http://www.w3.org/1999/xlink" width="2.575ex" height="2.509ex" style="vertical-align: -0.338ex;" viewBox="0 -934.9 1108.8 1080.4" role="img" focusable="false"><g stroke="currentColor" fill="currentColor" stroke-width="0" transform="matrix(1 0 0 -1 0 0)"><path stroke-width="1" d="M184 600Q184 624 203 642T247 661Q265 661 277 649T290 619Q290 596 270 577T226 557Q211 557 198 567T184 600ZM21 287Q21 295 30 318T54 369T98 420T158 442Q197 442 223 419T250 357Q250 340 236 301T196 196T154 83Q149 61 149 51Q149 26 166 26Q175 26 185 29T208 43T235 78T260 137Q263 149 265 151T282 153Q302 153 302 143Q302 135 293 112T268 61T223 11T161 -11Q129 -11 102 10T74 74Q74 91 79 106T122 220Q160 321 166 341T173 380Q173 404 156 404H154Q124 404 99 371T61 287Q60 286 59 284T58 281T56 279T53 278T49 278T41 278H27Q21 284 21 287Z"></path><g transform="translate(345,362)"><path stroke-width="1" transform="scale(0.707)" d="M26 385Q19 392 19 395Q19 399 22 411T27 425Q29 430 36 430T87 431H140L159 511Q162 522 166 540T173 566T179 586T187 603T197 615T211 624T229 626Q247 625 254 615T261 596Q261 589 252 549T232 470L222 433Q222 431 272 431H323Q330 424 330 420Q330 398 317 385H210L174 240Q135 80 135 68Q135 26 162 26Q197 26 230 60T283 144Q285 150 288 151T303 153H307Q322 153 322 145Q322 142 319 133Q314 117 301 95T267 48T216 6T155 -11Q125 -11 98 4T59 56Q57 64 57 83V101L92 241Q127 382 128 383Q128 385 77 385H26Z"></path><g transform="translate(255,0)"><path stroke-width="1" transform="scale(0.707)" d="M137 683Q138 683 209 688T282 694Q294 694 294 685Q294 674 258 534Q220 386 220 383Q220 381 227 388Q288 442 357 442Q411 442 444 415T478 336Q478 285 440 178T402 50Q403 36 407 31T422 26Q450 26 474 56T513 138Q516 149 519 151T535 153Q555 153 555 145Q555 144 551 130Q535 71 500 33Q466 -10 419 -10H414Q367 -10 346 17T325 74Q325 90 361 192T398 345Q398 404 354 404H349Q266 404 205 306L198 293L164 158Q132 28 127 16Q114 -11 83 -11Q69 -11 59 -2T48 16Q48 30 121 320L195 616Q195 629 188 632T149 637H128Q122 643 122 645T124 664Q129 683 137 683Z"></path></g></g></g></svg></span> line should contain the prefix of name of the <span style="font-size: 100%; display: inline-block;" class="MathJax_SVG" id="MathJax-Element-3-Frame"><svg xmlns:xlink="http://www.w3.org/1999/xlink" width="2.575ex" height="2.509ex" style="vertical-align: -0.338ex;" viewBox="0 -934.9 1108.8 1080.4" role="img" focusable="false"><g stroke="currentColor" fill="currentColor" stroke-width="0" transform="matrix(1 0 0 -1 0 0)"><path stroke-width="1" d="M184 600Q184 624 203 642T247 661Q265 661 277 649T290 619Q290 596 270 577T226 557Q211 557 198 567T184 600ZM21 287Q21 295 30 318T54 369T98 420T158 442Q197 442 223 419T250 357Q250 340 236 301T196 196T154 83Q149 61 149 51Q149 26 166 26Q175 26 185 29T208 43T235 78T260 137Q263 149 265 151T282 153Q302 153 302 143Q302 135 293 112T268 61T223 11T161 -11Q129 -11 102 10T74 74Q74 91 79 106T122 220Q160 321 166 341T173 380Q173 404 156 404H154Q124 404 99 371T61 287Q60 286 59 284T58 281T56 279T53 278T49 278T41 278H27Q21 284 21 287Z"></path><g transform="translate(345,362)"><path stroke-width="1" transform="scale(0.707)" d="M26 385Q19 392 19 395Q19 399 22 411T27 425Q29 430 36 430T87 431H140L159 511Q162 522 166 540T173 566T179 586T187 603T197 615T211 624T229 626Q247 625 254 615T261 596Q261 589 252 549T232 470L222 433Q222 431 272 431H323Q330 424 330 420Q330 398 317 385H210L174 240Q135 80 135 68Q135 26 162 26Q197 26 230 60T283 144Q285 150 288 151T303 153H307Q322 153 322 145Q322 142 319 133Q314 117 301 95T267 48T216 6T155 -11Q125 -11 98 4T59 56Q57 64 57 83V101L92 241Q127 382 128 383Q128 385 77 385H26Z"></path><g transform="translate(255,0)"><path stroke-width="1" transform="scale(0.707)" d="M137 683Q138 683 209 688T282 694Q294 694 294 685Q294 674 258 534Q220 386 220 383Q220 381 227 388Q288 442 357 442Q411 442 444 415T478 336Q478 285 440 178T402 50Q403 36 407 31T422 26Q450 26 474 56T513 138Q516 149 519 151T535 153Q555 153 555 145Q555 144 551 130Q535 71 500 33Q466 -10 419 -10H414Q367 -10 346 17T325 74Q325 90 361 192T398 345Q398 404 354 404H349Q266 404 205 306L198 293L164 158Q132 28 127 16Q114 -11 83 -11Q69 -11 59 -2T48 16Q48 30 121 320L195 616Q195 629 188 632T149 637H128Q122 643 122 645T124 664Q129 683 137 683Z"></path></g></g></g></svg></span> person which doesn't match with any other person who has joined earlier.</p></div></div></div><div class="challenge_sample_input"><div class="msB challenge_sample_input_title"><p><strong>Sample Input 0</strong></p></div><div class="msB challenge_sample_input_body"><div class="hackdown-content"><style id="MathJax_SVG_styles">.MathJax_SVG_Display {text-align: center; margin: 1em 0em; position: relative; display: block!important; text-indent: 0; max-width: none; max-height: none; min-width: 0; min-height: 0; width: 100%}
.MathJax_SVG .MJX-monospace {font-family: monospace}
.MathJax_SVG .MJX-sans-serif {font-family: sans-serif}
.MathJax_SVG {display: inline; font-style: normal; font-weight: normal; line-height: normal; font-size: 100%; font-size-adjust: none; text-indent: 0; text-align: left; text-transform: none; letter-spacing: normal; word-spacing: normal; word-wrap: normal; white-space: nowrap; float: none; direction: ltr; max-width: none; max-height: none; min-width: 0; min-height: 0; border: 0; padding: 0; margin: 0}
.MathJax_SVG * {transition: none; -webkit-transition: none; -moz-transition: none; -ms-transition: none; -o-transition: none}
.mjx-svg-href {fill: blue; stroke: blue}
.MathJax_SVG_LineBox {display: table!important}
.MathJax_SVG_LineBox span {display: table-cell!important; width: 10000em!important; min-width: 0; max-width: none; padding: 0; border: 0; margin: 0}
</style><svg style="display: none;"><defs id="MathJax_SVG_glyphs"></defs></svg><div class="highlight"><pre><span></span><span class="err">3</span>
<span class="err">alvin</span>
<span class="err">alice</span>
<span class="err">alvin</span>
</pre></div>
</div></div></div><div class="challenge_sample_output"><div class="msB challenge_sample_output_title"><p><strong>Sample Output 0</strong></p></div><div class="msB challenge_sample_output_body"><div class="hackdown-content"><style id="MathJax_SVG_styles">.MathJax_SVG_Display {text-align: center; margin: 1em 0em; position: relative; display: block!important; text-indent: 0; max-width: none; max-height: none; min-width: 0; min-height: 0; width: 100%}
.MathJax_SVG .MJX-monospace {font-family: monospace}
.MathJax_SVG .MJX-sans-serif {font-family: sans-serif}
.MathJax_SVG {display: inline; font-style: normal; font-weight: normal; line-height: normal; font-size: 100%; font-size-adjust: none; text-indent: 0; text-align: left; text-transform: none; letter-spacing: normal; word-spacing: normal; word-wrap: normal; white-space: nowrap; float: none; direction: ltr; max-width: none; max-height: none; min-width: 0; min-height: 0; border: 0; padding: 0; margin: 0}
.MathJax_SVG * {transition: none; -webkit-transition: none; -moz-transition: none; -ms-transition: none; -o-transition: none}
.mjx-svg-href {fill: blue; stroke: blue}
.MathJax_SVG_LineBox {display: table!important}
.MathJax_SVG_LineBox span {display: table-cell!important; width: 10000em!important; min-width: 0; max-width: none; padding: 0; border: 0; margin: 0}
</style><svg style="display: none;"><defs id="MathJax_SVG_glyphs"></defs></svg><div class="highlight"><pre><span></span><span class="err">a</span>
<span class="err">ali</span>
<span class="err">alvin 2</span>
</pre></div>
</div></div></div><div class="challenge_sample_input"><div class="msB challenge_sample_input_title"><p><strong>Sample Input 1</strong></p></div><div class="msB challenge_sample_input_body"><div class="hackdown-content"><style id="MathJax_SVG_styles">.MathJax_SVG_Display {text-align: center; margin: 1em 0em; position: relative; display: block!important; text-indent: 0; max-width: none; max-height: none; min-width: 0; min-height: 0; width: 100%}
.MathJax_SVG .MJX-monospace {font-family: monospace}
.MathJax_SVG .MJX-sans-serif {font-family: sans-serif}
.MathJax_SVG {display: inline; font-style: normal; font-weight: normal; line-height: normal; font-size: 100%; font-size-adjust: none; text-indent: 0; text-align: left; text-transform: none; letter-spacing: normal; word-spacing: normal; word-wrap: normal; white-space: nowrap; float: none; direction: ltr; max-width: none; max-height: none; min-width: 0; min-height: 0; border: 0; padding: 0; margin: 0}
.MathJax_SVG * {transition: none; -webkit-transition: none; -moz-transition: none; -ms-transition: none; -o-transition: none}
.mjx-svg-href {fill: blue; stroke: blue}
.MathJax_SVG_LineBox {display: table!important}
.MathJax_SVG_LineBox span {display: table-cell!important; width: 10000em!important; min-width: 0; max-width: none; padding: 0; border: 0; margin: 0}
</style><svg style="display: none;"><defs id="MathJax_SVG_glyphs"></defs></svg><div class="highlight"><pre><span></span><span class="err">6</span>
<span class="err">mary</span>
<span class="err">stacy</span>
<span class="err">sam</span>
<span class="err">samuel</span>
<span class="err">sam</span>
<span class="err">miguel</span>
</pre></div>
</div></div></div><div class="challenge_sample_output"><div class="msB challenge_sample_output_title"><p><strong>Sample Output 1</strong></p></div><div class="msB challenge_sample_output_body"><div class="hackdown-content"><style id="MathJax_SVG_styles">.MathJax_SVG_Display {text-align: center; margin: 1em 0em; position: relative; display: block!important; text-indent: 0; max-width: none; max-height: none; min-width: 0; min-height: 0; width: 100%}
.MathJax_SVG .MJX-monospace {font-family: monospace}
.MathJax_SVG .MJX-sans-serif {font-family: sans-serif}
.MathJax_SVG {display: inline; font-style: normal; font-weight: normal; line-height: normal; font-size: 100%; font-size-adjust: none; text-indent: 0; text-align: left; text-transform: none; letter-spacing: normal; word-spacing: normal; word-wrap: normal; white-space: nowrap; float: none; direction: ltr; max-width: none; max-height: none; min-width: 0; min-height: 0; border: 0; padding: 0; margin: 0}
.MathJax_SVG * {transition: none; -webkit-transition: none; -moz-transition: none; -ms-transition: none; -o-transition: none}
.mjx-svg-href {fill: blue; stroke: blue}
.MathJax_SVG_LineBox {display: table!important}
.MathJax_SVG_LineBox span {display: table-cell!important; width: 10000em!important; min-width: 0; max-width: none; padding: 0; border: 0; margin: 0}
</style><svg style="display: none;"><defs id="MathJax_SVG_glyphs"></defs></svg><div class="highlight"><pre><span></span><span class="err">m</span>
<span class="err">s</span>
<span class="err">sa</span>
<span class="err">samu</span>
<span class="err">sam 2</span>
<span class="err">mi</span>
</pre></div>
</div></div></div></div></div></div></div></div></section><section class="code-editor-section split"><div><div></div><div class="hr-monaco-editor-wrapper"><div class="hr-monaco-editor-with-input"><div><div class="hr-monaco-editor-with-statusbar"><div class="hr-monaco-editor"><div class="editor-toolbar"><div class="toolbar-left"></div><div class="toolbar-right"><div class="toolbar-custom-items"><div class="theme-change-wrapper"><div class="dropdown"><div aria-haspopup="menu" class="dropdown-handle theme-change-handle"><span class="text-link">Change Theme</span></div><div role="menu" class="dropdown-body align-center" aria-hidden="true" tabindex="-1"><div class="arrow"></div><div class="btn-group change-theme-btn-group"><button class="ui-btn ui-btn-normal ui-btn-line active" tabindex="0" data-automation="btn-light"><div class="ui-content align-icon-right"><span class="ui-text">Light</span></div></button><button class="ui-btn ui-btn-normal ui-btn-line" tabindex="0" data-automation="btn-dark"><div class="ui-content align-icon-right"><span class="ui-text">Dark</span></div></button><button class="ui-btn ui-btn-normal ui-btn-line" tabindex="0" data-automation="btn-contrast"><div class="ui-content align-icon-right"><span class="ui-text">High Contrast</span></div></button></div></div></div></div></div><div class="Select  select-language has-value is-searchable Select--single"><div class="Select-control"><span class="Select-multi-value-wrapper" id="react-select-3--value"><div class="Select-value"><span class="Select-value-label" role="option" aria-selected="true" id="react-select-3--value-item">C++14</span></div><div class="Select-input" style="display: inline-block;"><input aria-activedescendant="react-select-3--value" aria-expanded="false" aria-haspopup="false" aria-owns="" role="combobox" value="" style="box-sizing: content-box; width: 5px;"><div style="position: absolute; top: 0px; left: 0px; visibility: hidden; height: 0px; overflow: scroll; white-space: pre; font-size: 16px; font-family: OpenSans, Arial, Helvetica, sans-serif; font-weight: 400; font-style: normal; letter-spacing: normal; text-transform: none;"></div></div></span><span class="Select-arrow-zone"><span class="Select-arrow"></span></span></div></div><div class="toolbar-custom-items"><div class="hr-monaco-reset-code"><button class="ui-btn ui-btn-normal cursor reset-btn" tabindex="0" title="Reset Code" type="button"><div class="ui-content align-icon-right"><span class="ui-text"><i class="ui-icon-reset-code icon-grey reset-icon"></i></span></div></button></div><div class="fullscreen-btn-wrapper"><button class="ui-btn ui-btn-normal fullscreen fullscreen-btn no-select active-link hr-monaco-base-btn" tabindex="0" title="Switch to Full Screen layout" data-original-title="Switch to Full Screen layout"><div class="ui-content align-icon-right"><span class="ui-text"><i class="ui-icon-maximize icon-grey no-select"></i></span></div></button></div></div><div class="hr-monaco-settings-editor"><button class="ui-btn ui-btn-link cursor settings-toggle" tabindex="0" aria-haspopup="true" aria-expanded="false" aria-label="Editor Settings" title="Editor Settings"><i class="icon-cog ui-icon-settings icon-grey"></i></button></div></div></div><div class="hr-monaco-editor-parent"><div class="hr-monaco-base-editor showUnused" style="height: 556px;" data-keybinding-context="1" data-mode-id="cpp"><div class="monaco-editor vs focused" data-uri="file:///lsp-9e3f0be0-daf7-11e9-a940-fdbae603e0df/Solution.cpp" style="width: 890px; height: 556px;"><div data-mprt="3" class="overflow-guard" style="width: 890px; height: 556px;"><div class="margin" role="presentation" aria-hidden="true" style="position: absolute; will-change: transform; top: 0px; height: 1500px; width: 71px;"><div class="glyph-margin" style="left: 0px; width: 0px; height: 1500px;"></div><div class="margin-view-zones" role="presentation" aria-hidden="true" style="position: absolute;"></div><div class="margin-view-overlays focused" role="presentation" aria-hidden="true" style="position: absolute; width: 71px; font-family: SourceCodePro, monospace; font-weight: normal; font-size: 15px; line-height: 20px; letter-spacing: 0px; height: 1500px;"><div style="position:absolute;top:0px;width:100%;height:20px;"><div class="current-line" style="width:71px; height:20px;"></div><div class="line-numbers" style="left:0px;width:45px;">1</div></div><div style="position:absolute;top:20px;width:100%;height:20px;"><div class="line-numbers" style="left:0px;width:45px;">2</div></div><div style="position:absolute;top:40px;width:100%;height:20px;"><div class="line-numbers" style="left:0px;width:45px;">3</div></div><div style="position:absolute;top:60px;width:100%;height:20px;"><div class="line-numbers" style="left:0px;width:45px;">4</div></div><div style="position:absolute;top:80px;width:100%;height:20px;"><div class="line-numbers" style="left:0px;width:45px;">5</div></div><div style="position:absolute;top:100px;width:100%;height:20px;"><div class="line-numbers" style="left:0px;width:45px;">6</div></div><div style="position:absolute;top:120px;width:100%;height:20px;"><div class="line-numbers" style="left:0px;width:45px;">7</div></div><div style="position:absolute;top:140px;width:100%;height:20px;"><div class="cldr folding alwaysShowFoldIcons" style="left:45px;width:26px;"></div><div class="line-numbers" style="left:0px;width:45px;">8</div></div><div style="position:absolute;top:160px;width:100%;height:20px;"><div class="line-numbers" style="left:0px;width:45px;">9</div></div><div style="position:absolute;top:180px;width:100%;height:20px;"><div class="line-numbers" style="left:0px;width:45px;">10</div></div><div style="position:absolute;top:200px;width:100%;height:20px;"><div class="line-numbers" style="left:0px;width:45px;">11</div></div><div style="position:absolute;top:220px;width:100%;height:20px;"><div class="line-numbers" style="left:0px;width:45px;">12</div></div><div style="position:absolute;top:240px;width:100%;height:20px;"><div class="line-numbers" style="left:0px;width:45px;">13</div></div><div style="position:absolute;top:260px;width:100%;height:20px;"><div class="line-numbers" style="left:0px;width:45px;">14</div></div><div style="position:absolute;top:280px;width:100%;height:20px;"><div class="line-numbers" style="left:0px;width:45px;">15</div></div><div style="position:absolute;top:300px;width:100%;height:20px;"><div class="line-numbers" style="left:0px;width:45px;">16</div></div><div style="position:absolute;top:320px;width:100%;height:20px;"><div class="line-numbers" style="left:0px;width:45px;">17</div></div><div style="position:absolute;top:340px;width:100%;height:20px;"><div class="line-numbers" style="left:0px;width:45px;">18</div></div><div style="position:absolute;top:360px;width:100%;height:20px;"><div class="line-numbers" style="left:0px;width:45px;">19</div></div><div style="position:absolute;top:380px;width:100%;height:20px;"><div class="cldr folding alwaysShowFoldIcons" style="left:45px;width:26px;"></div><div class="line-numbers" style="left:0px;width:45px;">20</div></div><div style="position:absolute;top:400px;width:100%;height:20px;"><div class="line-numbers" style="left:0px;width:45px;">21</div></div><div style="position:absolute;top:420px;width:100%;height:20px;"><div class="line-numbers" style="left:0px;width:45px;">22</div></div><div style="position:absolute;top:440px;width:100%;height:20px;"><div class="line-numbers" style="left:0px;width:45px;">23</div></div><div style="position:absolute;top:460px;width:100%;height:20px;"><div class="line-numbers" style="left:0px;width:45px;">24</div></div><div style="position:absolute;top:480px;width:100%;height:20px;"><div class="line-numbers" style="left:0px;width:45px;">25</div></div><div style="position:absolute;top:500px;width:100%;height:20px;"><div class="line-numbers" style="left:0px;width:45px;">26</div></div><div style="position:absolute;top:520px;width:100%;height:20px;"><div class="line-numbers" style="left:0px;width:45px;">27</div></div><div style="position:absolute;top:540px;width:100%;height:20px;"><div class="line-numbers" style="left:0px;width:45px;">28</div></div></div></div><div class="monaco-scrollable-element editor-scrollable vs" role="presentation" data-mprt="5" style="position: absolute; overflow: hidden; left: 71px; height: 556px; width: 819px;"><div class="lines-content monaco-editor-background" style="position: absolute; overflow: hidden; width: 1e+06px; height: 1e+06px; will-change: transform; top: 0px; left: 0px;"><div class="view-overlays focused" role="presentation" aria-hidden="true" style="position: absolute; height: 0px; width: 819px;"><div style="position:absolute;top:0px;width:100%;height:20px;"><div class="current-line" style="width:819px; height:20px;"></div></div><div style="position:absolute;top:20px;width:100%;height:20px;"></div><div style="position:absolute;top:40px;width:100%;height:20px;"></div><div style="position:absolute;top:60px;width:100%;height:20px;"></div><div style="position:absolute;top:80px;width:100%;height:20px;"></div><div style="position:absolute;top:100px;width:100%;height:20px;"></div><div style="position:absolute;top:120px;width:100%;height:20px;"></div><div style="position:absolute;top:140px;width:100%;height:20px;"></div><div style="position:absolute;top:160px;width:100%;height:20px;"><div class="cigr" style="left:0px;height:20px;width:36px"></div></div><div style="position:absolute;top:180px;width:100%;height:20px;"><div class="cigr" style="left:0px;height:20px;width:36px"></div></div><div style="position:absolute;top:200px;width:100%;height:20px;"><div class="cigr" style="left:0px;height:20px;width:36px"></div></div><div style="position:absolute;top:220px;width:100%;height:20px;"><div class="cigr" style="left:0px;height:20px;width:36px"></div></div><div style="position:absolute;top:240px;width:100%;height:20px;"><div class="cigr" style="left:0px;height:20px;width:36px"></div></div><div style="position:absolute;top:260px;width:100%;height:20px;"><div class="cigr" style="left:0px;height:20px;width:36px"></div></div><div style="position:absolute;top:280px;width:100%;height:20px;"></div><div style="position:absolute;top:300px;width:100%;height:20px;"></div><div style="position:absolute;top:320px;width:100%;height:20px;"><div class="cdr squiggly-warning" style="left:0px;width:9px;height:20px;"></div></div><div style="position:absolute;top:340px;width:100%;height:20px;"></div><div style="position:absolute;top:360px;width:100%;height:20px;"></div><div style="position:absolute;top:380px;width:100%;height:20px;"></div><div style="position:absolute;top:400px;width:100%;height:20px;"><div class="cigr" style="left:0px;height:20px;width:36px"></div></div><div style="position:absolute;top:420px;width:100%;height:20px;"><div class="cigr" style="left:0px;height:20px;width:36px"></div></div><div style="position:absolute;top:440px;width:100%;height:20px;"><div class="cigr" style="left:0px;height:20px;width:36px"></div></div><div style="position:absolute;top:460px;width:100%;height:20px;"><div class="cigr" style="left:0px;height:20px;width:36px"></div></div><div style="position:absolute;top:480px;width:100%;height:20px;"><div class="cigr" style="left:0px;height:20px;width:36px"></div></div><div style="position:absolute;top:500px;width:100%;height:20px;"><div class="cigr" style="left:0px;height:20px;width:36px"></div></div><div style="position:absolute;top:520px;width:100%;height:20px;"><div class="cigr" style="left:0px;height:20px;width:36px"></div></div><div style="position:absolute;top:540px;width:100%;height:20px;"><div class="cigr" style="left:0px;height:20px;width:36px"></div></div></div><div role="presentation" aria-hidden="true" class="view-rulers"></div><div class="view-zones" role="presentation" aria-hidden="true" style="position: absolute;"></div><div class="view-lines" role="presentation" aria-hidden="true" data-mprt="7" style="position: absolute; font-family: SourceCodePro, monospace; font-weight: normal; font-size: 15px; line-height: 20px; letter-spacing: 0px; width: 819px; height: 1500px;"><div style="top:0px;height:20px;" class="view-line"><span><span class="mtk6">#include</span><span class="mtk1">&nbsp;</span><span class="mtk6">&lt;</span><span class="mtk21">bits/stdc++.h</span><span class="mtk6">&gt;</span></span></div><div style="top:20px;height:20px;" class="view-line"><span><span>&nbsp;</span></span></div><div style="top:40px;height:20px;" class="view-line"><span><span class="mtk6">using</span><span class="mtk1">&nbsp;</span><span class="mtk6">namespace</span><span class="mtk1">&nbsp;std;</span></span></div><div style="top:60px;height:20px;" class="view-line"><span><span>&nbsp;</span></span></div><div style="top:80px;height:20px;" class="view-line"><span><span class="mtk1">string&nbsp;ltrim(</span><span class="mtk6">const</span><span class="mtk1">&nbsp;string&nbsp;&amp;);</span></span></div><div style="top:100px;height:20px;" class="view-line"><span><span class="mtk1">string&nbsp;rtrim(</span><span class="mtk6">const</span><span class="mtk1">&nbsp;string&nbsp;&amp;);</span></span></div><div style="top:120px;height:20px;" class="view-line"><span><span>&nbsp;</span></span></div><div style="top:140px;height:20px;" class="view-line"><span><span class="mtk8">/*</span></span></div><div style="top:160px;height:20px;" class="view-line"><span><span class="mtk8">&nbsp;*&nbsp;Complete&nbsp;the&nbsp;'solve'&nbsp;function&nbsp;below.</span></span></div><div style="top:180px;height:20px;" class="view-line"><span><span class="mtk8">&nbsp;*</span></span></div><div style="top:200px;height:20px;" class="view-line"><span><span class="mtk8">&nbsp;*&nbsp;The&nbsp;function&nbsp;is&nbsp;expected&nbsp;to&nbsp;return&nbsp;a&nbsp;STRING_ARR</span><span class="mtk8">AY.</span></span></div><div style="top:220px;height:20px;" class="view-line"><span><span class="mtk8">&nbsp;*&nbsp;The&nbsp;function&nbsp;accepts&nbsp;STRING_ARRAY&nbsp;names&nbsp;as&nbsp;para</span><span class="mtk8">meter.</span></span></div><div style="top:240px;height:20px;" class="view-line"><span><span class="mtk8">&nbsp;*/</span></span></div><div style="top:260px;height:20px;" class="view-line"><span><span>&nbsp;</span></span></div><div style="top:280px;height:20px;" class="view-line"><span><span class="mtk1">vector&lt;string&gt;&nbsp;solve(vector&lt;string&gt;&nbsp;names)&nbsp;{</span></span></div><div style="top:300px;height:20px;" class="view-line"><span><span>&nbsp;</span></span></div><div style="top:320px;height:20px;" class="view-line"><span><span class="mtk1">}</span></span></div><div style="top:340px;height:20px;" class="view-line"><span><span>&nbsp;</span></span></div><div style="top:360px;height:20px;" class="view-line"><span><span class="mtk6">int</span><span class="mtk1">&nbsp;main()</span></span></div><div style="top:380px;height:20px;" class="view-line"><span><span class="mtk1">{</span></span></div><div style="top:400px;height:20px;" class="view-line"><span><span class="mtk1">&nbsp;&nbsp;&nbsp;&nbsp;ofstream&nbsp;fout(getenv(</span><span class="mtk21">"OUTPUT_PATH"</span><span class="mtk1">));</span></span></div><div style="top:420px;height:20px;" class="view-line"><span><span>&nbsp;</span></span></div><div style="top:440px;height:20px;" class="view-line"><span><span class="mtk1">&nbsp;&nbsp;&nbsp;&nbsp;string&nbsp;n_temp;</span></span></div><div style="top:460px;height:20px;" class="view-line"><span><span class="mtk1">&nbsp;&nbsp;&nbsp;&nbsp;getline(cin,&nbsp;n_temp);</span></span></div><div style="top:480px;height:20px;" class="view-line"><span><span>&nbsp;</span></span></div><div style="top:500px;height:20px;" class="view-line"><span><span class="mtk1">&nbsp;&nbsp;&nbsp;&nbsp;</span><span class="mtk6">int</span><span class="mtk1">&nbsp;n&nbsp;=&nbsp;stoi(ltrim(rtrim(n_temp)));</span></span></div><div style="top:520px;height:20px;" class="view-line"><span><span>&nbsp;</span></span></div><div style="top:540px;height:20px;" class="view-line"><span><span class="mtk1">&nbsp;&nbsp;&nbsp;&nbsp;vector&lt;string&gt;&nbsp;names(n);</span></span></div></div><div data-mprt="1" class="contentWidgets" style="position: absolute; top: 0px;"><div class="lightbulb-glyph" title="Show Fixes (Ctrl+.)" widgetid="LightBulbWidget" style="position: absolute; visibility: hidden;"></div></div><div role="presentation" aria-hidden="true" class="cursors-layer cursor-line-style cursor-solid"><div class="cursor " style="height: 20px; top: 0px; left: 0px; font-family: SourceCodePro, monospace; font-weight: normal; font-size: 15px; line-height: 20px; letter-spacing: 0px; display: block; visibility: inherit; width: 1.6px;"></div></div></div><div role="presentation" aria-hidden="true" class="invisible scrollbar horizontal" style="position: absolute; width: 805px; height: 10px; left: 0px; bottom: 0px;"><div class="slider" style="position: absolute; top: 0px; left: 0px; height: 10px; will-change: transform; width: 805px;"></div></div><canvas class="decorationsOverviewRuler" aria-hidden="true" width="17" height="695" style="position: absolute; will-change: transform; top: 0px; right: 0px; width: 14px; height: 556px;"></canvas><div role="presentation" aria-hidden="true" class="visible scrollbar vertical" style="position: absolute; width: 14px; height: 556px; right: 0px; top: 0px;"><div class="slider" style="position: absolute; top: 0px; left: 0px; width: 14px; will-change: transform; height: 206px;"></div></div></div><div role="presentation" aria-hidden="true" style="width: 890px;"></div><textarea data-mprt="6" class="inputarea" wrap="off" autocorrect="off" autocapitalize="off" autocomplete="off" spellcheck="false" aria-label="Editor content;Press Alt+F1 for Accessibility Options." role="textbox" aria-multiline="true" aria-haspopup="false" aria-autocomplete="both" style="font-family: SourceCodePro, monospace; font-weight: normal; font-size: 1px; line-height: 20px; letter-spacing: 0px; top: 0px; left: 71px; width: 1px; height: 1px;"></textarea><div style="position: absolute; top: 0px; left: 0px; width: 0px; height: 0px;" class="monaco-editor-background textAreaCover line-numbers"></div><div data-mprt="4" class="overlayWidgets" style="width: 890px;"><div class="accessibilityHelpWidget" role="dialog" aria-hidden="true" widgetid="editor.contrib.accessibilityHelpWidget" style="display: none; position: absolute;"><div role="document"></div></div><div class="monaco-editor-hover hidden" aria-hidden="true" role="presentation" widgetid="editor.contrib.modesGlyphHoverWidget" style="position: absolute;"></div></div><div data-mprt="8" class="minimap slider-mouseover" role="presentation" aria-hidden="true" style="position: absolute; left: 0px; width: 0px; height: 556px;"><div class="minimap-shadow-hidden" style="height: 556px;"></div><canvas width="1" height="695" style="position: absolute; left: 0px; width: 0.8px; height: 556px;"></canvas><div class="minimap-slider" style="position: absolute; will-change: transform; width: 0px;"><div class="minimap-slider-horizontal" style="position: absolute; width: 0px; height: 0px;"></div></div></div></div><div data-mprt="2" class="overflowingContentWidgets"><div class="monaco-editor rename-box" widgetid="__renameInputWidget" style="height: 20px; box-shadow: rgb(168, 168, 168) 0px 2px 8px; position: absolute; visibility: hidden; max-width: 1536px;"><input class="rename-input" type="text" aria-label="Rename input. Type new name and press Enter to commit." style="font-family: SourceCodePro, monospace; font-weight: normal; font-size: 15px; background-color: rgb(255, 255, 255); color: rgb(97, 97, 97); border-width: 0px; border-style: none;"></div><div class="monaco-editor-hover hidden" tabindex="0" widgetid="editor.contrib.modesContentHoverWidget" style="position: absolute; visibility: hidden; max-width: 1536px;"><div class="monaco-scrollable-element " role="presentation" style="position: relative; overflow: hidden;"><div class="monaco-editor-hover-content" style="overflow: hidden; font-size: 15px; line-height: 20px; max-height: 250px;"></div><div role="presentation" aria-hidden="true" class="invisible scrollbar horizontal" style="position: absolute;"><div class="slider" style="position: absolute; top: 0px; left: 0px; height: 10px; will-change: transform;"></div></div><div role="presentation" aria-hidden="true" class="invisible scrollbar vertical" style="position: absolute;"><div class="slider" style="position: absolute; top: 0px; left: 0px; width: 10px; will-change: transform;"></div></div><div class="shadow"></div><div class="shadow"></div><div class="shadow top-left-corner"></div></div></div></div><div class="context-view monaco-builder-hidden" aria-hidden="true"></div></div></div></div></div><div class="hr-monaco-editor-statusbar"><div class="statusbar-position">Line: 1 Col: 1</div><div style="display: flex;"><div class="statusbar-message"></div></div></div></div><div class="pmR pmL pmB plT run-code-wrapper"><button class=" pull-right btn btn-primary hr-monaco-submit">Submit Code</button><button class=" pull-right btn msR hr-monaco-compile">Run Code</button></div></div><div class="pmR pmL pmB hr-monaco-custom-input-wrapper inline"><div><button class="btn btn-text upload-file mlR" data-analytics="Upload File" type="button"><i class="icon-upload ui-icon-upload"></i>Upload Code as File</button></div><div><label><div class="custom-checkbox inline"><input type="checkbox" class="custom-input-checkbox"></div><span class="lmT msL testcase-label">Test against custom input</span></label></div></div></div></div></div><div class="challenge-response fs-container"></div></section></div><div class="right-pane"><aside class="theme-m-content fullscreen-hide challenge-sidebar"><div class="challenge-sidebar-container"><div class="sidebar-problem-difficulty challenge-sidebar-help"><div class="difficulty-block"><p class="difficulty-label">Author</p><a class="pull-right text-link" data-analytics="ChallengeViewHeaderAuthor" data-attr1="video-conference" data-attr2="Shafaet" href="https://www.hackerrank.com/profile/Shafaet">Shafaet</a></div><div class="difficulty-block"><p class="difficulty-label">Difficulty</p><p class="pull-right difficulty-easy">Easy</p></div><div class="difficulty-block"><p class="difficulty-label">Max Score</p><p class="sidebar-detail pull-right">15</p></div><div class="difficulty-block"><p class="difficulty-label">Submitted By</p><a class="pull-right text-link" data-analytics="ChallengeViewHackerCount" data-attr1="video-conference" href="https://www.hackerrank.com/contests/hourrank-30/challenges/video-conference/leaderboard">994</a></div></div><div class="challenge-sidebar-help"><h2 class="text-sec-headline-s">Need Help?</h2><hr class="hr-line-light"><div class="mlB"><div class="link-wrapper"><a data-analytics="ChallengeSidebarUI" data-attr1="discussions" data-attr2="video-conference" data-attr3="hourrank-30" href="https://www.hackerrank.com/contests/hourrank-30/challenges/video-conference/forum"><i class="ui-icon-discussion ui-icon-grey sidebar-icon"></i><span class="ui-icon-label">View discussions</span></a></div><div class="link-wrapper"><a data-analytics="ChallengeSidebarUI" data-attr1="editorial" data-attr2="video-conference" data-attr3="hourrank-30" href="https://www.hackerrank.com/contests/hourrank-30/challenges/video-conference/editorial"><i class="ui-icon-editorial ui-icon-grey sidebar-icon"></i><span class="ui-icon-label">View editorial</span></a></div><div class="link-wrapper"><a data-analytics="ChallengeSidebarUI" data-attr1="topscorers" data-attr2="video-conference" data-attr3="hourrank-30" href="https://www.hackerrank.com/contests/hourrank-30/challenges/video-conference/leaderboard"><i class="ui-icon-trophy ui-icon-grey sidebar-icon"></i><span class="ui-icon-label">View top submissions</span></a></div></div></div><div class="challenge-rating rating"><p class="zeta rating-label">rate this challenge</p><div class="rating"><i class="rating-icon cursor ui-icon-star" data-analytics="RatedChallenge" data-attr7="1"></i><i class="rating-icon cursor ui-icon-star" data-analytics="RatedChallenge" data-attr7="2"></i><i class="rating-icon cursor ui-icon-star" data-analytics="RatedChallenge" data-attr7="3"></i><i class="rating-icon cursor ui-icon-star" data-analytics="RatedChallenge" data-attr7="4"></i><i class="rating-icon cursor ui-icon-star" data-analytics="RatedChallenge" data-attr7="5"></i></div></div><div class="challenge-sidebar-help need-help-wrapper"><div class="text-sec-headline-s">MORE DETAILS</div><hr class="hr-line-light"><div class="link-wrapper"><a target="_blank" id="pdf-link" data-analytics="ChallengeViewSidebarPDF" data-attr1="video-conference" href="https://www.hackerrank.com/rest/contests/hourrank-30/challenges/video-conference/download_pdf?language=English"><i class="ui-icon-grey sidebar-icon ui-icon-download"></i><span class="ui-icon-label">Download problem statement</span></a></div><div class="link-wrapper"><a target="_blank" id="test-cases-link" data-analytics="ChallengeViewSidebarTestCases" data-attr1="video-conference" href="https://www.hackerrank.com/rest/contests/hourrank-30/challenges/video-conference/download_testcases"><i class="ui-icon-grey sidebar-icon ui-icon-download"></i><span class="ui-icon-label">Download all test cases</span></a></div><div class="link-wrapper fullscreen-hide"><a class="cursor" data-analytics="ChallengeViewSuggestEdit" data-attr1="video-conference"><i class="ui-icon-grey sidebar-icon ui-icon-edit"></i><span class="ui-icon-label">Suggest Edits</span></a></div></div><div class="social-share-wrap-2"><div class="clearfix"><div class="social-links-wrapper pull-left"><a class="cursor"><i class="social-share-icon ui-icon-facebook"></i></a><a class="cursor"><i class="social-share-icon ui-icon-twitter"></i></a><a class="cursor"><i class="social-share-icon ui-icon-linkedin"></i></a></div></div></div></div></aside></div></div></div></div></section></div></div><div></div><footer class="community-footer"><ul class="footer-links"><li class="link-item"><a target="_blank" class="footer-link calendar" data-analytics="FooterLinkCalendar" href="https://www.hackerrank.com/calendar">Contest Calendar</a></li><li class="link-item"><a target="_blank" class="footer-link blog" data-analytics="FooterLinkBlog" href="https://blog.hackerrank.com/">Blog</a></li><li class="link-item"><a target="_blank" class="footer-link scoring" data-analytics="FooterLinkScoring" href="https://www.hackerrank.com/scoring">Scoring</a></li><li class="link-item"><a target="_blank" class="footer-link environment" data-analytics="FooterLinkEnvironment" href="https://www.hackerrank.com/environment">Environment</a></li><li class="link-item"><a target="_blank" class="footer-link faq" data-analytics="FooterLinkFAQ" href="https://www.hackerrank.com/faq">FAQ</a></li><li class="link-item"><a target="_blank" class="footer-link" data-analytics="FooterLinkAboutUs" href="https://www.hackerrank.com/aboutus">About Us</a></li><li class="link-item"><a target="_blank" class="footer-link" data-analytics="FooterLinkSupport" href="https://help.hackerrank.com/hc/en-us">Support</a></li><li class="link-item"><a target="_blank" class="footer-link" data-analytics="FooterLinkCareers" href="https://www.hackerrank.com/careers">Careers</a></li><li class="link-item"><a target="_blank" class="footer-link" data-analytics="FooterLinkTermsOfService" href="https://www.hackerrank.com/terms-of-service">Terms Of Service</a></li><li class="link-item"><a target="_blank" class="footer-link" data-analytics="FooterLinkPrivacyPolicy" href="https://www.hackerrank.com/privacy">Privacy Policy</a></li><li class="link-item"><a target="_blank" class="footer-link featureRequestButton" data-analytics="FooterLinkFeatureRequest" href="https://www.hackerrank.com/support/feature">Request a Feature</a></li></ul></footer></div></div></div></div><!--Required to handle event bubbling of click in ios safari -->

  <script>
    //HR namespace
    var HR = {};
    HR.development = false;
    HR.assetPath = 'https://hrcdn.net/fcore/assets/';
    HR.pageLoadTime = Date.now();
    HR.productNamespace = 'hackerrank';
    HR.production = true;
    HR.devServer = false;
    HR.isIsomorphic = true;
    HR.loadedWithOldCss = false;
    HR.pusher = {"key":"a280047e3b323ccb1b65","cluster":"mt1"};
  </script>

  <!-- Vendor scripts -->
  
    <script src="./nama_files/hackerrank_r_vendor-740631685f.js.download"></script>
  

  
  <script src="./nama_files/runtime-54a5d0a6.js.download"></script>
  <script src="./nama_files/hackerrank_r_client-7d610062.js.download"></script>
  
<script>
  var getUser = (function() {
    var userData;
    $(window).on('initializeNewUser', function(e, user) {
      userData = user;
    });
    try{
      if (typeof userData === 'undefined') {
        userData = JSON.parse(decodeURI($('#initialUserData').html()));
        $('#initialUserData').remove();
      }
    } catch(e){
      userData = {};
      console.log('No initial User data found');
    }
    return function() {
      return userData;
    }
  })();
</script>


<!-- setting up sentry -->

  <script src="./nama_files/raven.min.js.download" async="" crossorigin="anonymous" id="raven"></script>
  <script>
    (function(window, queue, loaded, script, user) {

        var setupRaven = function(user) {
          var userContext = {};
          if (user && !!user.id) {
            userContext.handle = user.id;
          }
          var extraContext = {
            cdnUrl: Cookies.get("cdn_url")
          }
          if (Cookies) {
            if (HR.productNamespace === 'hackerrank') {
              extraContext.mixpanel_token = Cookies.get('hackerrank_mixpanel_token')
            } else if (HR.productNamespace === 'hackerrankx') {
              extraContext.mixpanel_token = Cookies.get('hackerrankx_mixpanel_token')
            }
          }
          if(typeof Raven !== 'undefined') {
            Raven.setUserContext(userContext);
            Raven.setExtraContext(extraContext);
          }
        }
        $(window).on('initializeNewUser', function(e, user) {
          setupRaven(user);
        });

        window.onerror = function e(message, file, lineNo, columnNo, error) {
            if (loaded) return;
            queue.push([message, file, lineNo, columnNo, error]);
        };

        window.onunhandledrejection = function e(error) {
            if (loaded) return;
            queue.push([
                error.reason,
            ]);
        };

        script.onreadystatechange = script.onload = function() {
            if (loaded) return;
            loaded = true;

            Raven.config('https://6b2d52b23d5a4dd4bc44330335327c04@sentry.io/234162', {
                release: "16568d183c",
                ignoreUrls: [/cdn\.userty\.com/],
                ignoreErrors: [
                  'Error: Connection is disposed',
                  'Connection got disposed',
                  'A network error occurred',
                  'Model is disposed!',
                  'Unable to get property \'isVisible\' of undefined',
                  'Cannot read property \'isVisible\' of undefined',
                ],
            }).install();

            setupRaven(user);

            window.onunhandledrejection = function e(error) {
                Raven.captureException(error.reason, {
                    extra: {
                        type: error.type,
                    },
                });
            };

            queue.forEach(function(error) {
                Raven.captureException(error[4] || error[0], {
                    extra: {
                        file: error[1],
                        line: error[2],
                        col: error[3],
                    },
                });
            });
        };
    }(window, [], false, document.getElementById('raven'), getUser()));
 </script>




<!-- google analytics tracking -->
<script>
  var _gaq = _gaq || [];
  
  _gaq.push(['candidate_company._setAccount', 'UA-45092266-1']);
  _gaq.push(['candidate_company._trackPageview']);
  _gaq.push(['candidate_company._gat._anonymizeIp']);
  _gaq.push(['_setCampSourceKey', 'utm_source']);
  _gaq.push(['_setCampMediumKey', 'utm_medium']);
  _gaq.push(['_setCampContentKey', 'utm_keyword']);
  _gaq.push(['_setCampTermKey', 'utm_keyword']);
  _gaq.push(['_setCampNameKey', 'utm_campaign']);

  (function() {
    var ga = document.createElement('script'); ga.type = 'text/javascript'; ga.async = true;
    ga.src = ('https:' == document.location.protocol ? 'https://ssl' : 'http://www') + '.google-analytics.com/ga.js';
    var s = document.getElementsByTagName('script')[0]; s.parentNode.insertBefore(ga, s);
  })();
  
</script>
<!-- Pending candidate site custom GA code -->
<!-- google analytics tracking end-->

<!-- mixpanel tracking -->
<script type="text/javascript">
  
    (function(e,a){if(!a.__SV){var b=window;try{var c,l,i,j=b.location,g=j.hash;c=function(a,b){return(l=a.match(RegExp(b+"=([^&]*)")))?l[1]:null};g&&c(g,"state")&&(i=JSON.parse(decodeURIComponent(c(g,"state"))),"mpeditor"===i.action&&(b.sessionStorage.setItem("_mpcehash",g),history.replaceState(i.desiredHash||"",e.title,j.pathname+j.search)))}catch(m){}var k,h;window.mixpanel=a;a._i=[];a.init=function(b,c,f){function e(b,a){var c=a.split(".");2==c.length&&(b=b[c[0]],a=c[1]);b[a]=function(){b.push([a].concat(Array.prototype.slice.call(arguments,
0)))}}var d=a;"undefined"!==typeof f?d=a[f]=[]:f="mixpanel";d.people=d.people||[];d.toString=function(b){var a="mixpanel";"mixpanel"!==f&&(a+="."+f);b||(a+=" (stub)");return a};d.people.toString=function(){return d.toString(1)+".people (stub)"};k="disable time_event track track_pageview track_links track_forms register register_once alias unregister identify name_tag set_config reset people.set people.set_once people.increment people.append people.union people.track_charge people.clear_charges people.delete_user".split(" ");
for(h=0;h<k.length;h++)e(d,k[h]);a._i.push([b,c,f])};a.__SV=1.2;b=e.createElement("script");b.type="text/javascript";b.async=!0;b.src="undefined"!==typeof MIXPANEL_CUSTOM_LIB_URL?MIXPANEL_CUSTOM_LIB_URL:"file:"===e.location.protocol&&"//cdn.mxpnl.com/libs/mixpanel-2-latest.min.js".match(/^\/\//)?"https://cdn.mxpnl.com/libs/mixpanel-2-latest.min.js":"//cdn.mxpnl.com/libs/mixpanel-2-latest.min.js";c=e.getElementsByTagName("script")[0];c.parentNode.insertBefore(b,c)}})(document,window.mixpanel||[]);
    mixpanel.init("bcb75af88bccc92724ac5fd79271e1ff");

    
      
        mixpanel.init("86cf4681911d3ff600208fdc823c5ff5", {}, "jobs_test");
      
      mixpanel.identify(Cookies.get("hackerrank_mixpanel_token"));
    
  
</script>
<!-- mixpanel tracking end-->

<!-- auryc tracking start -->
<script type="text/javascript">
  
    function aurycProps(user) {
      if (user && user.company && HR.productNamespace === 'hackerrankx') {

        userProps = {
          user_role: user.role,
          company_id: user.company.id,
          plan_name: user.company.plan_name
        }
      } else if (HR.productNamespace === 'hackerrank') {
        userProps = {
          user_id: user.id,
        };
      } else {
        userProps = {};
      }
      return userProps;
    }

    function setupAurycProps(aurycId, user) {
      userProps = aurycProps(user);
      window.auryc.identify(aurycId);
      window.auryc.addUserProperties(userProps);
      window.auryc.setFeedbackEnabled(!!user.enable_nps_survey);
      window.auryc.addSessionProperties({productNamespace: HR.productNamespace});
    }

    setupAuryc = function(user) {
      hackerrankxAurycSrc = "//cdn.userty.com/207-hackerrankcom/container.js";
      hackerrankAurycSrc = "//cdn.userty.com/531-hackerrankCommunity/container.js";
      if(HR.productNamespace === 'hackerrankx') {
        if (!(user && user.id) || !!Cookies.get('admin_su') || user.disable_auryc) return;
        src = hackerrankxAurycSrc;
        aurycId = user.id.toString();
      } else {
        return
      }

      ;(function (g) { g.aurycReadyCb = g.aurycReadyCb || []; var d = document, i, am = d.createElement("script"), h = d.head || d.getElementsByTagName("head")[0],aex = { "src": src, "data-cfasync": "false", "async": "true", "defer": "true", "data-vendor": "userty", "data-role": "container", "charset": "utf-8" }; for (var attr in aex) { am.setAttribute(attr,aex[attr]); } h.appendChild(am); })(window);

      if (window.auryc) {
        setupAurycProps(aurycId, user)
      } else if (window.aurycReadyCb) {
        window.aurycReadyCb.push(function() {
          setupAurycProps(aurycId, user)
        })
      }
    }

    setupAuryc(getUser());
    $(window).on('initializeNewUser', function(e, user) {
      setupAuryc(user);
    });
  
</script>
<!-- auryc tracking end -->

<!-- GTM tracking -->

<script type="text/javascript">
  var gtmTracking = function (user){
    if (window.dataLayer) {
      

      
        window.dataLayer.push({'event': 'setUserProps', 'userProps': {
          level: user.level,
          badges_onboarding_status: user.badges_onboarding_status,
          sourcing_jobs_consent: user.sourcing_jobs_consent
        }});
      
    }
  }
  gtmTracking(getUser());
  $(window).on('initializeNewUser', function(e, user) {
    gtmTracking(user);
  });

</script>

<!-- GTM tracking end -->


<!-- Google Tag Manager (noscript) #1 -->
<noscript><iframe src="https://www.googletagmanager.com/ns.html?id=GTM-NZTBQVZ"
height="0" width="0" style="display:none;visibility:hidden"></iframe></noscript>
<!-- End Google Tag Manager (noscript) #1 -->


<!-- Marketo to be added later -->



<!-- Bizible -->

<!-- HR metrics init -->
<script type="text/javascript">

  (function() {
    hr_metrics.init({
      product: 'hackerrank',
      use_cookie: true,
      uid_cookie_key: 'hackerrank_mixpanel_token',
      uid_token_cookie_key: 'metrics_user_identifier',
      session_cookie_key: 'session_id',
      metrics_endpoint:  'https://metrics.hackerrank.com/metrics' 
    });
  })();

  (function(h) {
    window.hr_metrics = h;
    if (!h.loaded) {
      var a = ['track', 'batch_track', 'app_track', 'externalService', 'init', 'batch_track_record', 'track_dwell_time', 'set_navigation_data'];
      for (var i = 0; i < a.length; i++) {
        if (!h[a[i]]) {h[a[i]] = function() {};}
      }
    }
  })(window.hr_metrics || {});



</script>

<!-- hrutm_params -->

<!-- HR metrics extension pack -->
<script type="text/javascript">

  
    if (('performance' in window) && ('timing' in window.performance)) {
      $(window).on("load", function() {
        setTimeout(function(){
          var timing = window.performance.timing;
          var obj = {
            referring_url: window.location.pathname,
            fullLoadTime: timing.loadEventEnd - timing.navigationStart,
            // Total time from req start to load
            loadTime: timing.loadEventEnd - timing.fetchStart,
            // Time spent constructing the DOM tree
            domReadyTime: timing.domComplete - timing.domInteractive,
            // Time consumed preparing the new page
            readyStart: timing.fetchStart - timing.navigationStart,
            // Time spent during redirection
            redirectTime: timing.redirectEnd - timing.redirectStart,
            // AppCache
            appcacheTime: timing.domainLookupStart - timing.fetchStart,
            // Time spent unloading documents
            unloadEventTime: timing.unloadEventEnd - timing.unloadEventStart,
            // DNS query time
            lookupDomainTime: timing.domainLookupEnd - timing.domainLookupStart,
            // TCP connection time
            connectTime: timing.connectEnd - timing.connectStart,
            // Time spent during the request
            requestTime: timing.responseEnd - timing.requestStart,
            // Request to completion of the DOM loading
            initDomTreeTime: timing.domInteractive - timing.responseEnd,
            // Load event time
            loadEventTime: timing.loadEventEnd - timing.loadEventStart,
            // Origin of the request
            react: true,
            //isIsomorphic flag
            isIsomorphic: window.HR.isIsomorphic,
            //old css loaded flag
            loadedWithOldCss: window.HR.loadedWithOldCss,
          }

          if (('navigation' in window.performance) && ('getEntries' in window.performance)) {
            obj.navigationType = window.performance.navigation.type;
            obj.navigationRedirectCount = window.performance.navigation.redirectCount;
            if (obj.fullLoadTime > 8000) {
              try {
                var entries = window.performance.getEntries();
                if(entries[0].toJSON){
                  obj.networkRequests = entries.map(function(e) {return e.toJSON();});
                }
              } catch (e) {
                //do nothing
              }
            }
          }

          hr_metrics.app_track('page-load-metrics', obj);
        }, 1000);
      });
    }
  

  $(window).on("load", function() {
      var _pathname = document.location.pathname;
      var cdn_url_switched = Cookies.get("cdn_url_switched");
      if (cdn_url_switched !== '') {
        Cookies.remove('cdn_url_switched');
      }
      hr_metrics.batch_track('PageLoad', _pathname + document.location.search, {
          attribute1: _pathname,
          attribute6: cdn_url_switched,
          cdn_url: Cookies.get("cdn_url")
      });

      if (hr_metrics.track_dwell_time) {
          hr_metrics.track_dwell_time(_pathname);
          hr_metrics.set_navigation_data();
      }

      $(window).on('beforeunload', function(){

          var _pathname = document.location.pathname;
          hr_metrics.batch_track('PageClose', _pathname + document.location.search, {
              attribute2: _pathname
          });

          hr_metrics.track_dwell_time(_pathname, true);

          hr_metrics.batch_track_record(true);
      });

  });

</script>

<!-- Facebook SDK -->
<!-- Twitter SDK -->

<!-- track button clicks -->
<script>
    $(document).on('click', 'a, button, input, select, i, div, span, h5', null, function(e) {
        var src = e.currentTarget, $src = $(e.currentTarget);
        if ($src.attr('data-analytics')) {
            action = 'Click'; data = $src.attr('data-analytics');
        } else {
            return;
        }

        
          hr_metrics.batch_track(action, data, (function() {
              var params={};
              for (var _i=1; _i<=12; ++_i){
                  var _attr = 'data-attr'+_i;
                  if ($src.attr(_attr)){
                    params['attribute'+_i] = $src.attr(_attr);
                  }
              }
              var attributes = src.attributes, attr_length = src.attributes.length;
              for (var i = 0; i < attr_length; i++){
                var attribute = attributes[i];
                if (attribute.name.indexOf('data-attr-') === 0){
                  param_name = attribute.name.substr('data-attr-'.length);
                  if (param_name.length > 0) {
                    params[param_name] = attribute.value;
                  }
                }
              }
              return params;
          })());
        

        
          // google analytics
          _gaq.push(['_trackEvent', 'Events' , action, data])
        
    });

    $(document).on('AnalyticsEvent', function(e) {
        action = e.event_type || false;
        data = e.event_name || false;

        if (!action || !data) {
          return;
        }

        params = {}
        params['attribute1'] = e.event_value || ""
        params['attribute7'] = e.integer_event_value

        if (window.HR && window.HR.current_page) {
          params['attribute2'] = window.HR.current_page;
        }

        if (window.HR && window.HR.current_contest) {
          params['attribute3'] = window.HR.current_contest.get('name');
        }

        
            hr_metrics.batch_track(action, data, params);
        

        
          // google analytics
          _gaq.push(['_trackEvent', 'Events' , action, data]);
        
    });

  </script>
<!-- track button clicks end-->

<!-- Linkedin Insights -->




<div class="monaco-aria-container"><div class="monaco-alert" role="alert" aria-atomic="true"></div><div class="monaco-status" role="status" aria-atomic="true"></div></div></body><span class="gr__tooltip"><span class="gr__tooltip-content"></span><i class="gr__tooltip-logo"></i><span class="gr__triangle"></span></span></html>