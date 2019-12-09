<!DOCTYPE html>
<html lang="en">
<head>
  <meta id="bb-bootstrap" data-current-user="{&quot;isKbdShortcutsEnabled&quot;: true, &quot;isSshEnabled&quot;: false, &quot;isAuthenticated&quot;: false}"
 />
  <meta name="bb-env" content="production" />
  <script nonce="">

if (window.performance) {

  
  window.performance.okayToSendMetrics = !document.hidden && 'onvisibilitychange' in document;

  if (window.performance.okayToSendMetrics) {

    
    window.addEventListener('visibilitychange', function () {
      if (document.hidden) {
        window.performance.okayToSendMetrics = false;
      }
    });
  }
}
</script>  
  
  
  <meta http-equiv="X-UA-Compatible" content="IE=edge" />
  <meta name="viewport" content="width=device-width, initial-scale=1">
  <meta charset="utf-8">
  <title>
  sonnayasomnambula / GoogleMockForDummiesRussian 
  / source  / README.md
 &mdash; Bitbucket
</title>
  <script nonce="" type="text/javascript">(window.NREUM||(NREUM={})).loader_config={xpid:"VwMGVVZSGwIIUFBQDwU="};window.NREUM||(NREUM={}),__nr_require=function(t,e,n){function r(n){if(!e[n]){var o=e[n]={exports:{}};t[n][0].call(o.exports,function(e){var o=t[n][1][e];return r(o||e)},o,o.exports)}return e[n].exports}if("function"==typeof __nr_require)return __nr_require;for(var o=0;o<n.length;o++)r(n[o]);return r}({1:[function(t,e,n){function r(t){try{c.console&&console.log(t)}catch(e){}}var o,i=t("ee"),a=t(20),c={};try{o=localStorage.getItem("__nr_flags").split(","),console&&"function"==typeof console.log&&(c.console=!0,o.indexOf("dev")!==-1&&(c.dev=!0),o.indexOf("nr_dev")!==-1&&(c.nrDev=!0))}catch(s){}c.nrDev&&i.on("internal-error",function(t){r(t.stack)}),c.dev&&i.on("fn-err",function(t,e,n){r(n.stack)}),c.dev&&(r("NR AGENT IN DEVELOPMENT MODE"),r("flags: "+a(c,function(t,e){return t}).join(", ")))},{}],2:[function(t,e,n){function r(t,e,n,r,c){try{h?h-=1:o(c||new UncaughtException(t,e,n),!0)}catch(f){try{i("ierr",[f,s.now(),!0])}catch(d){}}return"function"==typeof u&&u.apply(this,a(arguments))}function UncaughtException(t,e,n){this.message=t||"Uncaught error with no additional information",this.sourceURL=e,this.line=n}function o(t,e){var n=e?null:s.now();i("err",[t,n])}var i=t("handle"),a=t(21),c=t("ee"),s=t("loader"),f=t("gos"),u=window.onerror,d=!1,p="nr@seenError",h=0;s.features.err=!0,t(1),window.onerror=r;try{throw new Error}catch(l){"stack"in l&&(t(13),t(12),"addEventListener"in window&&t(6),s.xhrWrappable&&t(14),d=!0)}c.on("fn-start",function(t,e,n){d&&(h+=1)}),c.on("fn-err",function(t,e,n){d&&!n[p]&&(f(n,p,function(){return!0}),this.thrown=!0,o(n))}),c.on("fn-end",function(){d&&!this.thrown&&h>0&&(h-=1)}),c.on("internal-error",function(t){i("ierr",[t,s.now(),!0])})},{}],3:[function(t,e,n){t("loader").features.ins=!0},{}],4:[function(t,e,n){function r(){M++,S=y.hash,this[u]=b.now()}function o(){M--,y.hash!==S&&i(0,!0);var t=b.now();this[l]=~~this[l]+t-this[u],this[d]=t}function i(t,e){E.emit("newURL",[""+y,e])}function a(t,e){t.on(e,function(){this[e]=b.now()})}var c="-start",s="-end",f="-body",u="fn"+c,d="fn"+s,p="cb"+c,h="cb"+s,l="jsTime",m="fetch",v="addEventListener",w=window,y=w.location,b=t("loader");if(w[v]&&b.xhrWrappable){var g=t(10),x=t(11),E=t(8),P=t(6),O=t(13),R=t(7),T=t(14),L=t(9),j=t("ee"),N=j.get("tracer");t(15),b.features.spa=!0;var S,M=0;j.on(u,r),j.on(p,r),j.on(d,o),j.on(h,o),j.buffer([u,d,"xhr-done","xhr-resolved"]),P.buffer([u]),O.buffer(["setTimeout"+s,"clearTimeout"+c,u]),T.buffer([u,"new-xhr","send-xhr"+c]),R.buffer([m+c,m+"-done",m+f+c,m+f+s]),E.buffer(["newURL"]),g.buffer([u]),x.buffer(["propagate",p,h,"executor-err","resolve"+c]),N.buffer([u,"no-"+u]),L.buffer(["new-jsonp","cb-start","jsonp-error","jsonp-end"]),a(T,"send-xhr"+c),a(j,"xhr-resolved"),a(j,"xhr-done"),a(R,m+c),a(R,m+"-done"),a(L,"new-jsonp"),a(L,"jsonp-end"),a(L,"cb-start"),E.on("pushState-end",i),E.on("replaceState-end",i),w[v]("hashchange",i,!0),w[v]("load",i,!0),w[v]("popstate",function(){i(0,M>1)},!0)}},{}],5:[function(t,e,n){function r(t){}if(window.performance&&window.performance.timing&&window.performance.getEntriesByType){var o=t("ee"),i=t("handle"),a=t(13),c=t(12),s="learResourceTimings",f="addEventListener",u="resourcetimingbufferfull",d="bstResource",p="resource",h="-start",l="-end",m="fn"+h,v="fn"+l,w="bstTimer",y="pushState",b=t("loader");b.features.stn=!0,t(8);var g=NREUM.o.EV;o.on(m,function(t,e){var n=t[0];n instanceof g&&(this.bstStart=b.now())}),o.on(v,function(t,e){var n=t[0];n instanceof g&&i("bst",[n,e,this.bstStart,b.now()])}),a.on(m,function(t,e,n){this.bstStart=b.now(),this.bstType=n}),a.on(v,function(t,e){i(w,[e,this.bstStart,b.now(),this.bstType])}),c.on(m,function(){this.bstStart=b.now()}),c.on(v,function(t,e){i(w,[e,this.bstStart,b.now(),"requestAnimationFrame"])}),o.on(y+h,function(t){this.time=b.now(),this.startPath=location.pathname+location.hash}),o.on(y+l,function(t){i("bstHist",[location.pathname+location.hash,this.startPath,this.time])}),f in window.performance&&(window.performance["c"+s]?window.performance[f](u,function(t){i(d,[window.performance.getEntriesByType(p)]),window.performance["c"+s]()},!1):window.performance[f]("webkit"+u,function(t){i(d,[window.performance.getEntriesByType(p)]),window.performance["webkitC"+s]()},!1)),document[f]("scroll",r,{passive:!0}),document[f]("keypress",r,!1),document[f]("click",r,!1)}},{}],6:[function(t,e,n){function r(t){for(var e=t;e&&!e.hasOwnProperty(u);)e=Object.getPrototypeOf(e);e&&o(e)}function o(t){c.inPlace(t,[u,d],"-",i)}function i(t,e){return t[1]}var a=t("ee").get("events"),c=t(23)(a,!0),s=t("gos"),f=XMLHttpRequest,u="addEventListener",d="removeEventListener";e.exports=a,"getPrototypeOf"in Object?(r(document),r(window),r(f.prototype)):f.prototype.hasOwnProperty(u)&&(o(window),o(f.prototype)),a.on(u+"-start",function(t,e){var n=t[1],r=s(n,"nr@wrapped",function(){function t(){if("function"==typeof n.handleEvent)return n.handleEvent.apply(n,arguments)}var e={object:t,"function":n}[typeof n];return e?c(e,"fn-",null,e.name||"anonymous"):n});this.wrapped=t[1]=r}),a.on(d+"-start",function(t){t[1]=this.wrapped||t[1]})},{}],7:[function(t,e,n){function r(t,e,n){var r=t[e];"function"==typeof r&&(t[e]=function(){var t=r.apply(this,arguments);return o.emit(n+"start",arguments,t),t.then(function(e){return o.emit(n+"end",[null,e],t),e},function(e){throw o.emit(n+"end",[e],t),e})})}var o=t("ee").get("fetch"),i=t(20);e.exports=o;var a=window,c="fetch-",s=c+"body-",f=["arrayBuffer","blob","json","text","formData"],u=a.Request,d=a.Response,p=a.fetch,h="prototype";u&&d&&p&&(i(f,function(t,e){r(u[h],e,s),r(d[h],e,s)}),r(a,"fetch",c),o.on(c+"end",function(t,e){var n=this;e?e.clone().arrayBuffer().then(function(t){n.rxSize=t.byteLength,o.emit(c+"done",[null,e],n)}):o.emit(c+"done",[t],n)}))},{}],8:[function(t,e,n){var r=t("ee").get("history"),o=t(23)(r);e.exports=r,o.inPlace(window.history,["pushState","replaceState"],"-")},{}],9:[function(t,e,n){function r(t){function e(){s.emit("jsonp-end",[],p),t.removeEventListener("load",e,!1),t.removeEventListener("error",n,!1)}function n(){s.emit("jsonp-error",[],p),s.emit("jsonp-end",[],p),t.removeEventListener("load",e,!1),t.removeEventListener("error",n,!1)}var r=t&&"string"==typeof t.nodeName&&"script"===t.nodeName.toLowerCase();if(r){var o="function"==typeof t.addEventListener;if(o){var a=i(t.src);if(a){var u=c(a),d="function"==typeof u.parent[u.key];if(d){var p={};f.inPlace(u.parent,[u.key],"cb-",p),t.addEventListener("load",e,!1),t.addEventListener("error",n,!1),s.emit("new-jsonp",[t.src],p)}}}}}function o(){return"addEventListener"in window}function i(t){var e=t.match(u);return e?e[1]:null}function a(t,e){var n=t.match(p),r=n[1],o=n[3];return o?a(o,e[r]):e[r]}function c(t){var e=t.match(d);return e&&e.length>=3?{key:e[2],parent:a(e[1],window)}:{key:t,parent:window}}var s=t("ee").get("jsonp"),f=t(23)(s);if(e.exports=s,o()){var u=/[?&](?:callback|cb)=([^&#]+)/,d=/(.*)\.([^.]+)/,p=/^(\w+)(\.|$)(.*)$/,h=["appendChild","insertBefore","replaceChild"];f.inPlace(HTMLElement.prototype,h,"dom-"),f.inPlace(HTMLHeadElement.prototype,h,"dom-"),f.inPlace(HTMLBodyElement.prototype,h,"dom-"),s.on("dom-start",function(t){r(t[0])})}},{}],10:[function(t,e,n){var r=t("ee").get("mutation"),o=t(23)(r),i=NREUM.o.MO;e.exports=r,i&&(window.MutationObserver=function(t){return this instanceof i?new i(o(t,"fn-")):i.apply(this,arguments)},MutationObserver.prototype=i.prototype)},{}],11:[function(t,e,n){function r(t){var e=a.context(),n=c(t,"executor-",e),r=new f(n);return a.context(r).getCtx=function(){return e},a.emit("new-promise",[r,e],e),r}function o(t,e){return e}var i=t(23),a=t("ee").get("promise"),c=i(a),s=t(20),f=NREUM.o.PR;e.exports=a,f&&(window.Promise=r,["all","race"].forEach(function(t){var e=f[t];f[t]=function(n){function r(t){return function(){a.emit("propagate",[null,!o],i),o=o||!t}}var o=!1;s(n,function(e,n){Promise.resolve(n).then(r("all"===t),r(!1))});var i=e.apply(f,arguments),c=f.resolve(i);return c}}),["resolve","reject"].forEach(function(t){var e=f[t];f[t]=function(t){var n=e.apply(f,arguments);return t!==n&&a.emit("propagate",[t,!0],n),n}}),f.prototype["catch"]=function(t){return this.then(null,t)},f.prototype=Object.create(f.prototype,{constructor:{value:r}}),s(Object.getOwnPropertyNames(f),function(t,e){try{r[e]=f[e]}catch(n){}}),a.on("executor-start",function(t){t[0]=c(t[0],"resolve-",this),t[1]=c(t[1],"resolve-",this)}),a.on("executor-err",function(t,e,n){t[1](n)}),c.inPlace(f.prototype,["then"],"then-",o),a.on("then-start",function(t,e){this.promise=e,t[0]=c(t[0],"cb-",this),t[1]=c(t[1],"cb-",this)}),a.on("then-end",function(t,e,n){this.nextPromise=n;var r=this.promise;a.emit("propagate",[r,!0],n)}),a.on("cb-end",function(t,e,n){a.emit("propagate",[n,!0],this.nextPromise)}),a.on("propagate",function(t,e,n){this.getCtx&&!e||(this.getCtx=function(){if(t instanceof Promise)var e=a.context(t);return e&&e.getCtx?e.getCtx():this})}),r.toString=function(){return""+f})},{}],12:[function(t,e,n){var r=t("ee").get("raf"),o=t(23)(r),i="equestAnimationFrame";e.exports=r,o.inPlace(window,["r"+i,"mozR"+i,"webkitR"+i,"msR"+i],"raf-"),r.on("raf-start",function(t){t[0]=o(t[0],"fn-")})},{}],13:[function(t,e,n){function r(t,e,n){t[0]=a(t[0],"fn-",null,n)}function o(t,e,n){this.method=n,this.timerDuration=isNaN(t[1])?0:+t[1],t[0]=a(t[0],"fn-",this,n)}var i=t("ee").get("timer"),a=t(23)(i),c="setTimeout",s="setInterval",f="clearTimeout",u="-start",d="-";e.exports=i,a.inPlace(window,[c,"setImmediate"],c+d),a.inPlace(window,[s],s+d),a.inPlace(window,[f,"clearImmediate"],f+d),i.on(s+u,r),i.on(c+u,o)},{}],14:[function(t,e,n){function r(t,e){d.inPlace(e,["onreadystatechange"],"fn-",c)}function o(){var t=this,e=u.context(t);t.readyState>3&&!e.resolved&&(e.resolved=!0,u.emit("xhr-resolved",[],t)),d.inPlace(t,y,"fn-",c)}function i(t){b.push(t),l&&(x?x.then(a):v?v(a):(E=-E,P.data=E))}function a(){for(var t=0;t<b.length;t++)r([],b[t]);b.length&&(b=[])}function c(t,e){return e}function s(t,e){for(var n in t)e[n]=t[n];return e}t(6);var f=t("ee"),u=f.get("xhr"),d=t(23)(u),p=NREUM.o,h=p.XHR,l=p.MO,m=p.PR,v=p.SI,w="readystatechange",y=["onload","onerror","onabort","onloadstart","onloadend","onprogress","ontimeout"],b=[];e.exports=u;var g=window.XMLHttpRequest=function(t){var e=new h(t);try{u.emit("new-xhr",[e],e),e.addEventListener(w,o,!1)}catch(n){try{u.emit("internal-error",[n])}catch(r){}}return e};if(s(h,g),g.prototype=h.prototype,d.inPlace(g.prototype,["open","send"],"-xhr-",c),u.on("send-xhr-start",function(t,e){r(t,e),i(e)}),u.on("open-xhr-start",r),l){var x=m&&m.resolve();if(!v&&!m){var E=1,P=document.createTextNode(E);new l(a).observe(P,{characterData:!0})}}else f.on("fn-end",function(t){t[0]&&t[0].type===w||a()})},{}],15:[function(t,e,n){function r(t){var e=this.params,n=this.metrics;if(!this.ended){this.ended=!0;for(var r=0;r<d;r++)t.removeEventListener(u[r],this.listener,!1);if(!e.aborted){if(n.duration=a.now()-this.startTime,4===t.readyState){e.status=t.status;var i=o(t,this.lastSize);if(i&&(n.rxSize=i),this.sameOrigin){var s=t.getResponseHeader("X-NewRelic-App-Data");s&&(e.cat=s.split(", ").pop())}}else e.status=0;n.cbTime=this.cbTime,f.emit("xhr-done",[t],t),c("xhr",[e,n,this.startTime])}}}function o(t,e){var n=t.responseType;if("json"===n&&null!==e)return e;var r="arraybuffer"===n||"blob"===n||"json"===n?t.response:t.responseText;return l(r)}function i(t,e){var n=s(e),r=t.params;r.host=n.hostname+":"+n.port,r.pathname=n.pathname,t.sameOrigin=n.sameOrigin}var a=t("loader");if(a.xhrWrappable){var c=t("handle"),s=t(16),f=t("ee"),u=["load","error","abort","timeout"],d=u.length,p=t("id"),h=t(19),l=t(18),m=window.XMLHttpRequest;a.features.xhr=!0,t(14),f.on("new-xhr",function(t){var e=this;e.totalCbs=0,e.called=0,e.cbTime=0,e.end=r,e.ended=!1,e.xhrGuids={},e.lastSize=null,h&&(h>34||h<10)||window.opera||t.addEventListener("progress",function(t){e.lastSize=t.loaded},!1)}),f.on("open-xhr-start",function(t){this.params={method:t[0]},i(this,t[1]),this.metrics={}}),f.on("open-xhr-end",function(t,e){"loader_config"in NREUM&&"xpid"in NREUM.loader_config&&this.sameOrigin&&e.setRequestHeader("X-NewRelic-ID",NREUM.loader_config.xpid)}),f.on("send-xhr-start",function(t,e){var n=this.metrics,r=t[0],o=this;if(n&&r){var i=l(r);i&&(n.txSize=i)}this.startTime=a.now(),this.listener=function(t){try{"abort"===t.type&&(o.params.aborted=!0),("load"!==t.type||o.called===o.totalCbs&&(o.onloadCalled||"function"!=typeof e.onload))&&o.end(e)}catch(n){try{f.emit("internal-error",[n])}catch(r){}}};for(var c=0;c<d;c++)e.addEventListener(u[c],this.listener,!1)}),f.on("xhr-cb-time",function(t,e,n){this.cbTime+=t,e?this.onloadCalled=!0:this.called+=1,this.called!==this.totalCbs||!this.onloadCalled&&"function"==typeof n.onload||this.end(n)}),f.on("xhr-load-added",function(t,e){var n=""+p(t)+!!e;this.xhrGuids&&!this.xhrGuids[n]&&(this.xhrGuids[n]=!0,this.totalCbs+=1)}),f.on("xhr-load-removed",function(t,e){var n=""+p(t)+!!e;this.xhrGuids&&this.xhrGuids[n]&&(delete this.xhrGuids[n],this.totalCbs-=1)}),f.on("addEventListener-end",function(t,e){e instanceof m&&"load"===t[0]&&f.emit("xhr-load-added",[t[1],t[2]],e)}),f.on("removeEventListener-end",function(t,e){e instanceof m&&"load"===t[0]&&f.emit("xhr-load-removed",[t[1],t[2]],e)}),f.on("fn-start",function(t,e,n){e instanceof m&&("onload"===n&&(this.onload=!0),("load"===(t[0]&&t[0].type)||this.onload)&&(this.xhrCbStart=a.now()))}),f.on("fn-end",function(t,e){this.xhrCbStart&&f.emit("xhr-cb-time",[a.now()-this.xhrCbStart,this.onload,e],e)})}},{}],16:[function(t,e,n){e.exports=function(t){var e=document.createElement("a"),n=window.location,r={};e.href=t,r.port=e.port;var o=e.href.split("://");!r.port&&o[1]&&(r.port=o[1].split("/")[0].split("@").pop().split(":")[1]),r.port&&"0"!==r.port||(r.port="https"===o[0]?"443":"80"),r.hostname=e.hostname||n.hostname,r.pathname=e.pathname,r.protocol=o[0],"/"!==r.pathname.charAt(0)&&(r.pathname="/"+r.pathname);var i=!e.protocol||":"===e.protocol||e.protocol===n.protocol,a=e.hostname===document.domain&&e.port===n.port;return r.sameOrigin=i&&(!e.hostname||a),r}},{}],17:[function(t,e,n){function r(){}function o(t,e,n){return function(){return i(t,[f.now()].concat(c(arguments)),e?null:this,n),e?void 0:this}}var i=t("handle"),a=t(20),c=t(21),s=t("ee").get("tracer"),f=t("loader"),u=NREUM;"undefined"==typeof window.newrelic&&(newrelic=u);var d=["setPageViewName","setCustomAttribute","setErrorHandler","finished","addToTrace","inlineHit","addRelease"],p="api-",h=p+"ixn-";a(d,function(t,e){u[e]=o(p+e,!0,"api")}),u.addPageAction=o(p+"addPageAction",!0),u.setCurrentRouteName=o(p+"routeName",!0),e.exports=newrelic,u.interaction=function(){return(new r).get()};var l=r.prototype={createTracer:function(t,e){var n={},r=this,o="function"==typeof e;return i(h+"tracer",[f.now(),t,n],r),function(){if(s.emit((o?"":"no-")+"fn-start",[f.now(),r,o],n),o)try{return e.apply(this,arguments)}catch(t){throw s.emit("fn-err",[arguments,this,t],n),t}finally{s.emit("fn-end",[f.now()],n)}}}};a("setName,setAttribute,save,ignore,onEnd,getContext,end,get".split(","),function(t,e){l[e]=o(h+e)}),newrelic.noticeError=function(t){"string"==typeof t&&(t=new Error(t)),i("err",[t,f.now()])}},{}],18:[function(t,e,n){e.exports=function(t){if("string"==typeof t&&t.length)return t.length;if("object"==typeof t){if("undefined"!=typeof ArrayBuffer&&t instanceof ArrayBuffer&&t.byteLength)return t.byteLength;if("undefined"!=typeof Blob&&t instanceof Blob&&t.size)return t.size;if(!("undefined"!=typeof FormData&&t instanceof FormData))try{return JSON.stringify(t).length}catch(e){return}}}},{}],19:[function(t,e,n){var r=0,o=navigator.userAgent.match(/Firefox[\/\s](\d+\.\d+)/);o&&(r=+o[1]),e.exports=r},{}],20:[function(t,e,n){function r(t,e){var n=[],r="",i=0;for(r in t)o.call(t,r)&&(n[i]=e(r,t[r]),i+=1);return n}var o=Object.prototype.hasOwnProperty;e.exports=r},{}],21:[function(t,e,n){function r(t,e,n){e||(e=0),"undefined"==typeof n&&(n=t?t.length:0);for(var r=-1,o=n-e||0,i=Array(o<0?0:o);++r<o;)i[r]=t[e+r];return i}e.exports=r},{}],22:[function(t,e,n){e.exports={exists:"undefined"!=typeof window.performance&&window.performance.timing&&"undefined"!=typeof window.performance.timing.navigationStart}},{}],23:[function(t,e,n){function r(t){return!(t&&t instanceof Function&&t.apply&&!t[a])}var o=t("ee"),i=t(21),a="nr@original",c=Object.prototype.hasOwnProperty,s=!1;e.exports=function(t,e){function n(t,e,n,o){function nrWrapper(){var r,a,c,s;try{a=this,r=i(arguments),c="function"==typeof n?n(r,a):n||{}}catch(f){p([f,"",[r,a,o],c])}u(e+"start",[r,a,o],c);try{return s=t.apply(a,r)}catch(d){throw u(e+"err",[r,a,d],c),d}finally{u(e+"end",[r,a,s],c)}}return r(t)?t:(e||(e=""),nrWrapper[a]=t,d(t,nrWrapper),nrWrapper)}function f(t,e,o,i){o||(o="");var a,c,s,f="-"===o.charAt(0);for(s=0;s<e.length;s++)c=e[s],a=t[c],r(a)||(t[c]=n(a,f?c+o:o,i,c))}function u(n,r,o){if(!s||e){var i=s;s=!0;try{t.emit(n,r,o,e)}catch(a){p([a,n,r,o])}s=i}}function d(t,e){if(Object.defineProperty&&Object.keys)try{var n=Object.keys(t);return n.forEach(function(n){Object.defineProperty(e,n,{get:function(){return t[n]},set:function(e){return t[n]=e,e}})}),e}catch(r){p([r])}for(var o in t)c.call(t,o)&&(e[o]=t[o]);return e}function p(e){try{t.emit("internal-error",e)}catch(n){}}return t||(t=o),n.inPlace=f,n.flag=a,n}},{}],ee:[function(t,e,n){function r(){}function o(t){function e(t){return t&&t instanceof r?t:t?s(t,c,i):i()}function n(n,r,o,i){if(!p.aborted||i){t&&t(n,r,o);for(var a=e(o),c=l(n),s=c.length,f=0;f<s;f++)c[f].apply(a,r);var d=u[y[n]];return d&&d.push([b,n,r,a]),a}}function h(t,e){w[t]=l(t).concat(e)}function l(t){return w[t]||[]}function m(t){return d[t]=d[t]||o(n)}function v(t,e){f(t,function(t,n){e=e||"feature",y[n]=e,e in u||(u[e]=[])})}var w={},y={},b={on:h,emit:n,get:m,listeners:l,context:e,buffer:v,abort:a,aborted:!1};return b}function i(){return new r}function a(){(u.api||u.feature)&&(p.aborted=!0,u=p.backlog={})}var c="nr@context",s=t("gos"),f=t(20),u={},d={},p=e.exports=o();p.backlog=u},{}],gos:[function(t,e,n){function r(t,e,n){if(o.call(t,e))return t[e];var r=n();if(Object.defineProperty&&Object.keys)try{return Object.defineProperty(t,e,{value:r,writable:!0,enumerable:!1}),r}catch(i){}return t[e]=r,r}var o=Object.prototype.hasOwnProperty;e.exports=r},{}],handle:[function(t,e,n){function r(t,e,n,r){o.buffer([t],r),o.emit(t,e,n)}var o=t("ee").get("handle");e.exports=r,r.ee=o},{}],id:[function(t,e,n){function r(t){var e=typeof t;return!t||"object"!==e&&"function"!==e?-1:t===window?0:a(t,i,function(){return o++})}var o=1,i="nr@id",a=t("gos");e.exports=r},{}],loader:[function(t,e,n){function r(){if(!x++){var t=g.info=NREUM.info,e=p.getElementsByTagName("script")[0];if(setTimeout(u.abort,3e4),!(t&&t.licenseKey&&t.applicationID&&e))return u.abort();f(y,function(e,n){t[e]||(t[e]=n)}),s("mark",["onload",a()+g.offset],null,"api");var n=p.createElement("script");n.src="https://"+t.agent,e.parentNode.insertBefore(n,e)}}function o(){"complete"===p.readyState&&i()}function i(){s("mark",["domContent",a()+g.offset],null,"api")}function a(){return E.exists&&performance.now?Math.round(performance.now()):(c=Math.max((new Date).getTime(),c))-g.offset}var c=(new Date).getTime(),s=t("handle"),f=t(20),u=t("ee"),d=window,p=d.document,h="addEventListener",l="attachEvent",m=d.XMLHttpRequest,v=m&&m.prototype;NREUM.o={ST:setTimeout,SI:d.setImmediate,CT:clearTimeout,XHR:m,REQ:d.Request,EV:d.Event,PR:d.Promise,MO:d.MutationObserver};var w=""+location,y={beacon:"bam.nr-data.net",errorBeacon:"bam.nr-data.net",agent:"js-agent.newrelic.com/nr-spa-1071.min.js"},b=m&&v&&v[h]&&!/CriOS/.test(navigator.userAgent),g=e.exports={offset:c,now:a,origin:w,features:{},xhrWrappable:b};t(17),p[h]?(p[h]("DOMContentLoaded",i,!1),d[h]("load",r,!1)):(p[l]("onreadystatechange",o),d[l]("onload",r)),s("mark",["firstbyte",c],null,"api");var x=0,E=t(22)},{}]},{},["loader",2,15,5,3,4]);</script>
  


<meta id="bb-canon-url" name="bb-canon-url" content="https://bitbucket.org">
<meta name="bb-api-canon-url" content="https://api.bitbucket.org">


<meta name="bb-commit-hash" content="d1f637a9968a">
<meta name="bb-app-node" content="app-169">
<meta name="bb-view-name" content="bitbucket.apps.repo2.views.filebrowse">
<meta name="ignore-whitespace" content="False">
<meta name="tab-size" content="None">
<meta name="locale" content="en">
<meta name="application-name" content="Bitbucket">
<meta name="apple-mobile-web-app-title" content="Bitbucket">
<meta name="slack-app-id" content="A8W8QLZD1">


<meta name="theme-color" content="#0049B0">
<meta name="msapplication-TileColor" content="#0052CC">
<meta name="msapplication-TileImage" content="https://d301sr5gafysq2.cloudfront.net/d1f637a9968a/img/logos/bitbucket/mstile-150x150.png">
<link rel="apple-touch-icon" sizes="180x180" type="image/png" href="https://d301sr5gafysq2.cloudfront.net/d1f637a9968a/img/logos/bitbucket/apple-touch-icon.png">
<link rel="icon" sizes="192x192" type="image/png" href="https://d301sr5gafysq2.cloudfront.net/d1f637a9968a/img/logos/bitbucket/android-chrome-192x192.png">

<link rel="icon" sizes="16x16 24x24 32x32 64x64" type="image/x-icon" href="/favicon.ico?v=2">
<link rel="mask-icon" href="https://d301sr5gafysq2.cloudfront.net/d1f637a9968a/img/logos/bitbucket/safari-pinned-tab.svg" color="#0052CC">

<link rel="search" type="application/opensearchdescription+xml" href="/opensearch.xml" title="Bitbucket">

  <meta name="description" content="">
  
  
    
  



  <link rel="stylesheet" href="https://d301sr5gafysq2.cloudfront.net/d1f637a9968a/css/entry/vendor.css" />
<link rel="stylesheet" href="https://d301sr5gafysq2.cloudfront.net/d1f637a9968a/css/entry/app.css" />



  <link rel="stylesheet" href="https://d301sr5gafysq2.cloudfront.net/d1f637a9968a/css/entry/adg3-skeleton-nav.css">
  <link rel="stylesheet" href="https://d301sr5gafysq2.cloudfront.net/d1f637a9968a/css/entry/adg3.css">
  
  <script nonce="">
  window.__sentry__ = {"dsn": "https://ea49358f525d4019945839a3d7a8292a@sentry.io/159509", "release": "d1f637a9968a (canary)", "tags": {"project": "bitbucket-core"}, "environment": "canary"};
</script>
<script src="https://d301sr5gafysq2.cloudfront.net/d1f637a9968a/dist/webpack/sentry.js" nonce=""></script>
  <script src="https://d301sr5gafysq2.cloudfront.net/d1f637a9968a/dist/webpack/early.js" nonce=""></script>
  
  
  
    <link href="/sonnayasomnambula/googlemockfordummiesrussian/rss" rel="alternate nofollow" type="application/rss+xml" title="RSS feed for GoogleMockForDummiesRussian" />

</head>
<body class="production adg3 "
    data-static-url="https://d301sr5gafysq2.cloudfront.net/d1f637a9968a/"
data-base-url="https://bitbucket.org"
data-no-avatar-image="https://d301sr5gafysq2.cloudfront.net/d1f637a9968a/img/default_avatar/user_blue.svg"
data-current-user="{&quot;isKbdShortcutsEnabled&quot;: true, &quot;isSshEnabled&quot;: false, &quot;isAuthenticated&quot;: false}"
data-atlassian-id="{&quot;loginStatusUrl&quot;: &quot;https://id.atlassian.com/profile/rest/profile&quot;}"
data-settings="{&quot;MENTIONS_MIN_QUERY_LENGTH&quot;: 3}"

data-current-repo="{&quot;scm&quot;: &quot;hg&quot;, &quot;readOnly&quot;: false, &quot;mainbranch&quot;: {&quot;name&quot;: &quot;default&quot;}, &quot;uuid&quot;: &quot;f2f132aa-2c5d-4679-9475-187980b93953&quot;, &quot;language&quot;: &quot;markdown&quot;, &quot;owner&quot;: {&quot;username&quot;: &quot;sonnayasomnambula&quot;, &quot;uuid&quot;: &quot;a333feef-d86c-4d07-b6c3-add583321656&quot;, &quot;isTeam&quot;: false}, &quot;fullslug&quot;: &quot;sonnayasomnambula/googlemockfordummiesrussian&quot;, &quot;slug&quot;: &quot;googlemockfordummiesrussian&quot;, &quot;id&quot;: 18022907, &quot;pygmentsLanguage&quot;: null}"
data-current-cset="4a33d5b66d6f2b5d4965f09ca2b1a0650ad7a488"






data-browser-monitoring="true"
data-switch-create-pullrequest-commit-status="true"




>
<div
  id="page"
  data-mobile-nav
>
  
    <div id="adg3-navigation"
  
  
  
   data-mobile-nav
  >
  <nav class="skeleton-nav">
    <div class="skeleton-nav--left">
      <div class="skeleton-nav--left-top">
        <ul class="skeleton-nav--items">
          <li></li>
          <li></li>
          <li></li>
          <li class="skeleton--icon"></li>
          <li class="skeleton--icon-sub"></li>
          <li class="skeleton--icon-sub"></li>
          <li class="skeleton--icon-sub"></li>
          <li class="skeleton--icon-sub"></li>
          <li class="skeleton--icon-sub"></li>
          <li class="skeleton--icon-sub"></li>
        </ul>
      </div>
      <div class="skeleton-nav--left-bottom">
        <div class="skeleton-nav--left-bottom-wrapper">
          <div class="skeleton-nav--item-help"></div>
          <div class="skeleton-nav--item-profile"></div>
        </div>
      </div>
    </div>
    <div class="skeleton-nav--right">
      <ul class="skeleton-nav--items-wide">
        <li class="skeleton--icon-logo-container">
          <div class="skeleton--icon-container"></div>
          <div class="skeleton--icon-description"></div>
          <div class="skeleton--icon-logo"></div>
        </li>
        <li>
          <div class="skeleton--icon-small"></div>
          <div class="skeleton-nav--item-wide-content"></div>
        </li>
        <li>
          <div class="skeleton--icon-small"></div>
          <div class="skeleton-nav--item-wide-content"></div>
        </li>
        <li>
          <div class="skeleton--icon-small"></div>
          <div class="skeleton-nav--item-wide-content"></div>
        </li>
        <li>
          <div class="skeleton--icon-small"></div>
          <div class="skeleton-nav--item-wide-content"></div>
        </li>
        <li>
          <div class="skeleton--icon-small"></div>
          <div class="skeleton-nav--item-wide-content"></div>
        </li>
        <li>
          <div class="skeleton--icon-small"></div>
          <div class="skeleton-nav--item-wide-content"></div>
        </li>
      </ul>
    </div>
  </nav>
</div>

    <div id="wrapper">
      
  


      
  <div id="nps-survey-container"></div>

 

      
  

<div id="account-warning" data-module="header/account-warning"
  data-unconfirmed-addresses="false"
  data-no-addresses="false"
  
></div>



      
  
<header id="aui-message-bar">
  
</header>


      <div id="content" role="main">

        
          <header class="app-header">
            <div class="app-header--primary">
              
                <div class="app-header--context">
                  <div class="app-header--breadcrumbs">
                    
  <ol class="aui-nav aui-nav-breadcrumbs">
    <li>
  <a href="/sonnayasomnambula/">Serge Glazomitsky</a>
</li>

<li>
  <a href="/sonnayasomnambula/googlemockfordummiesrussian">GoogleMockForDummiesRussian</a>
</li>
    
  <li>
    <a href="/sonnayasomnambula/googlemockfordummiesrussian/src">
      Source
    </a>
  </li>

  </ol>

                  </div>
                  <h1 class="app-header--heading">
                    <span class="file-path">README.md</span>
                  </h1>
                </div>
              
            </div>

            <div class="app-header--secondary">
              
                
              
            </div>
          </header>
        

        
        
  <div class="aui-page-panel ">
    <div class="hidden">
  
  
  </div>
    <div class="aui-page-panel-inner">

      <div
        id="repo-content"
        class="aui-page-panel-content forks-enabled"
        data-module="repo/index"
        
      >
        
        
  <div id="source-container" class="maskable" data-module="repo/source/index">
    



<header id="source-path">
  
    <div class="labels labels-csv">
      <div class="aui-buttons">
        <button data-branches-tags-url="/api/1.0/repositories/sonnayasomnambula/googlemockfordummiesrussian/branches-tags"
                data-module="components/branch-dialog"
                
                class="aui-button branch-dialog-trigger" title="default">
          
            
              <span class="aui-icon aui-icon-small aui-iconfont-devtools-branch">Branch</span>
            
            <span class="name">default</span>
          
          <span class="aui-icon-dropdown"></span>
        </button>
        <button class="aui-button" id="checkout-branch-button"
                title="Check out this branch">
          <span class="aui-icon aui-icon-small aui-iconfont-devtools-clone">Check out branch</span>
          <span class="aui-icon-dropdown"></span>
        </button>
      </div>
      
    
    
  
    </div>
  
  
    <div class="secondary-actions">
      <div class="aui-buttons">
        
          <a href="/sonnayasomnambula/googlemockfordummiesrussian/src/4a33d5b66d6f/README.md?at=default"
            class="aui-button pjax-trigger source-toggle" aria-pressed="true">
            Source
          </a>
          <a href="/sonnayasomnambula/googlemockfordummiesrussian/diff/README.md?diff2=4a33d5b66d6f&at=default"
            class="aui-button pjax-trigger diff-toggle"
            title="Diff to previous change">
            Diff
          </a>
          <a href="/sonnayasomnambula/googlemockfordummiesrussian/history-node/4a33d5b66d6f/README.md?at=default"
            class="aui-button pjax-trigger history-toggle">
            History
          </a>
        
      </div>

      
      

    </div>
  
  <h1>
    
      
        <a href="/sonnayasomnambula/googlemockfordummiesrussian/src/4a33d5b66d6f?at=default"
          class="pjax-trigger root" title="sonnayasomnambula/googlemockfordummiesrussian at 4a33d5b66d6f">GoogleMockForDummiesRussian</a> /
      
      
        
          
            <span class="file-name">README.md</span>
          
        
      
    
  </h1>
  
    
    
  
  <div class="clearfix"></div>
</header>


  
    
  

  <div id="editor-container" class="maskable"
       data-module="repo/source/editor"
       data-repo-id="18022907"
       data-owner="sonnayasomnambula"
       data-slug="googlemockfordummiesrussian"
       data-is-writer="false"
       data-has-push-access="true"
       data-hash="4a33d5b66d6f2b5d4965f09ca2b1a0650ad7a488"
       data-branch="default"
       data-path="README.md"
       data-source-url="/api/internal/repositories/sonnayasomnambula/googlemockfordummiesrussian/src/4a33d5b66d6f2b5d4965f09ca2b1a0650ad7a488/README.md">
    <div id="source-view" class="file-source-container" data-module="repo/source/view-file" data-is-lfs="false">
      <div class="toolbar">
        <div class="primary">
          <div class="aui-buttons">
            
              <button id="file-history-trigger" class="aui-button aui-button-light changeset-info"
                      data-changeset="4a33d5b66d6f2b5d4965f09ca2b1a0650ad7a488"
                      data-path="README.md"
                      data-current="4a33d5b66d6f2b5d4965f09ca2b1a0650ad7a488">
                 

  <div class="aui-avatar aui-avatar-xsmall">
    <div class="aui-avatar-inner">
      <img src="https://bitbucket.org/account/sonnayasomnambula/avatar/16/?ts=1527004459">
    </div>
  </div>
  <span class="changeset-hash">4a33d5b</span>
  <time datetime="2016-04-25T07:31:33+00:00" class="timestamp"></time>
  <span class="aui-icon-dropdown"></span>

              </button>
            
          </div>
          
          <a href="/sonnayasomnambula/googlemockfordummiesrussian/full-commit/4a33d5b66d6f/README.md" id="full-commit-link"
             title="View full commit 4a33d5b">Full commit</a>
        </div>
        <div class="secondary">
          
          <div class="aui-buttons">
            
              <a href="/sonnayasomnambula/googlemockfordummiesrussian/annotate/4a33d5b66d6f2b5d4965f09ca2b1a0650ad7a488/README.md?at=default"
                 class="aui-button aui-button-light pjax-trigger blame-link">Annotate</a>
              
                
                <a data-embed-url="https://bitbucket.org/sonnayasomnambula/googlemockfordummiesrussian/src/4a33d5b66d6f2b5d4965f09ca2b1a0650ad7a488/README.md?embed=t" class="aui-button aui-button-light js-embed-link">
                  Embed
                </a>
              
            
            <a href="/sonnayasomnambula/googlemockfordummiesrussian/raw/4a33d5b66d6f2b5d4965f09ca2b1a0650ad7a488/README.md" class="aui-button aui-button-light raw-link">Raw</a>
          </div>
          
            <button id="file-edit-button" class="edit-button aui-button aui-button-light" disabled="disabled" aria-disabled="true">
              Edit
              <span class="edit-button-overlay" title="Log in to edit this file"></span>
            </button>
          
        </div>

        <div id="fileview-dropdown"
            class="aui-dropdown2 aui-style-default"
            data-fileview-container="#fileview-container"
            
            
            data-fileview-button="#fileview-trigger"
            data-module="connect/fileview">
          <div class="aui-dropdown2-section">
            <ul>
              <li>
                <a class="aui-dropdown2-radio aui-dropdown2-checked"
                    data-fileview-id="-1"
                    data-fileview-loaded="true"
                    data-fileview-target="#fileview-original"
                    data-fileview-connection-key=""
                    data-fileview-module-key="file-view-default">
                  Default File Viewer
                </a>
              </li>
              
            </ul>
          </div>
        </div>

        <div class="clearfix"></div>
      </div>
      <div id="fileview-container">
        <div id="fileview-original"
            class="fileview"
            data-module="repo/source/highlight-lines"
            data-fileview-loaded="true">
          


  <div class="readme file file-markup wiki-content"
      >
    <h1 id="markdown-header-google-c-mocking-framework">Google C++ Mocking Framework для начинающих</h1>
<p><em>Это перевод <a data-is-external-link="true" href="https://github.com/google/googletest/blob/master/googlemock/docs/ForDummies.md" rel="nofollow">Google C++ Mocking Framework for dummies</a>, выполненный <strong>demin</strong>, благополучно потерянный гуглом при переезде с code.google.com на github и вытащенный из кэша гугла</em></p>
<p>(<em>Замечание:</em> Если ваш компилятор выдает непонятные ошибки, попробуйте для начала обратиться к <a data-is-external-link="true" href="https://github.com/google/googletest/blob/master/googlemock/docs/FrequentlyAskedQuestions.md#how-am-i-supposed-to-make-sense-of-these-horrible-template-errors" rel="nofollow">Google Mock Doctor</a>.)</p>
<p>(<em>Примечание перевода:</em> На данный момент термин <em><a data-is-external-link="true" href="http://ru.wikipedia.org/wiki/Mock-%D0%BE%D0%B1%D1%8A%D0%B5%D0%BA%D1%82/" rel="nofollow">Mock-объект</a></em> решено оставить без перевода и употреблять просто в английской транскрипции. Также термин Matcher решено оставить в оригинале, чтобы не использовать корявое "обнаружитель совпадений" или что-то в это роде.)</p>
<h2 id="markdown-header-google-c-mocking-framework_1">Что такое Google C++ Mocking Framework?</h2>
<p>Когда вы создаете прототип или пишете тест, то порой не получается полагаться полностью на реальные объекты. <em>Mock-объект</em> реализует тот же интерфейс, что и реальный объект (поэтому он может использоваться как его замена), но позволяет во время выполнения задавать свое поведение (какие методы должны быть вызваны, в каком порядке и сколько раз, с какими аргументами, что должно быть результатом и т.д.).</p>
<p><em>Замечание:</em> Mock-объекты легко перепутать с <em>fake</em>-объектами. Fake- и mock-объекты используются для совершенно разных целей в методологии разработки через тестирование (Test-Driven Development).</p>
<ul>
<li><em>Fake</em>-объект реализует полноценную логику класса, но обычно в немного урезанном виде (чтобы не задействовать сложные взаимосвязи, например, реальную базу данных), поэтому их нельзя использовать в реальном приложении. Например, файловая система, живущая полностью в памяти, вместо полноценной дисковой файловой системы, может быть примером fake-объекта.</li>
<li><em>Mock</em>-объекты же запрограммированы в виде некоторых <em>предположений</em> для проверки вызова их методов извне и собственного поведения.</li>
</ul>
<p>Если все выше сказанное пока еще не совсем понятно для вас, не волнуйтесь - главное запомните, что mock-объекты позволяют вам проверять взаимодействие между ними и кодом, которых их вызывает. Различие между fake- и mock-объектами станет более понятным, когда вы начнете их использовать.</p>
<p><em>Google C++ Mocking Framework</em> (или просто <em>Google Mock</em>) является библиотекой (иногда мы также называем это "средой", так как это звучит модно) для создания mock-классов и работы с ними. Это работает также как <a data-is-external-link="true" href="http://www.jmock.org" rel="nofollow">jMock</a> и <a data-is-external-link="true" href="http://www.easymock.org/" rel="nofollow">EasyMock</a> для Java, только в С++. На текущий момент Google Mock работает в паре с <a data-is-external-link="true" href="https://github.com/google/googletest" rel="nofollow">Google C++ Testing Framework</a>. Мы надеемся в будущем поддержать работу с другими библиотеками тестирования.</p>
<p>Использование Google Mock состоит из трех основных шагов:</p>
<ul>
<li>Определите mock-класс для интерфейса который вы хотите сымитировать. Это достигается использованием простых макросов для описания методов. Они создадут реализацию вашего mock-класса;</li>
<li>Создайте mock-объекты и задайте их предполагаемое использование и поведение, используя интуитивно понятный синтаксис;</li>
<li>Запустите код, который взаимодействует с этими mock-объектами. Google Mock автоматически отследит и проверит предписанное использование mock-объектов по мере выполнения.</li>
</ul>
<h2 id="markdown-header-google-mock">Почему именно Google Mock?</h2>
<p>Несмотря на то, что использование mock-объектов помогает удалить ненужные зависимости при тестировании и сделать его быстрым и надежным, работать вручную с ними в С++ <em>затруднительно</em>:</p>
<ul>
<li>Кто-то должен создавать mock-классы. Эта работа обычно нудная и подвержена ошибкам. Неудивительно, что люди не любят это делать.</li>
<li>Качество mock-объектов, созданных вручную, может быть весьма непредсказуемым. Можно найти грамотно реализованные, но также полно созданных на скорую руку для решения конкретной проблемы и непригодных в других ситуациях.</li>
<li>Опыт, приобретенный после создания одного mock-объекта, оказывается бесполезным для следующего.</li>
</ul>
<p>Для сравнения, программисты на Java и Python вооружены отличными инструментами для автоматизированного создания mock-объектов. Их использование является доказано эффективной и широко распространенной техникой в мире этих языков. Наличие правильного инструмента имеет большое значение.</p>
<p>Google Mock создан, чтобы помочь программистам на C++. Идея взята от <a data-is-external-link="true" href="http://www.jmock.org/" rel="nofollow">jMock</a> и <a data-is-external-link="true" href="http://www.easymock.org/" rel="nofollow">EasyMock</a> и реализована на C++. Если перечисленные ниже проблемы достают вас, Google Mock поможет их решить:</p>
<ul>
<li>Вы застряли на стадии почти оптимальной архитектуры и хотите иметь более работоспособный прототип пока еще не совсем поздно, но создание прототипов на С++ нельзя назвать быстрым.</li>
<li>Ваши тесты работают медленно, так как зависят от множества библиотек или внешних ресурсов (например, базы данных).</li>
<li>Ваши тесты нестабильны, так как используют ненадежные ресурсы (например, сеть).</li>
<li>Вы ходите протестировать ваш код на предмет обработки ошибок (например, ошибка неверной контрольной суммы файла), но ошибки эти вызвать непросто.</li>
<li>Вы хотите убедиться, что ваш модуль правильно взаимодействует с другими модулями, но проследить это взаимодействие трудно, поэтому приходится использовать просто его результаты в конце работы.</li>
<li>Вы хотите сымитировать некоторые зависимости, но для них нет готовых mock-объектов, и вас явно не радуют mock-объекты, написанные вручную.</li>
</ul>
<p>Мы предлагаем вам использовать Google Mock как:</p>
<ul>
<li>средство <em>разработки</em>, позволяющее экспериментировать с разрабатываемым интерфейсом как можно раньше и чаще. Чем больше будет тестовых итераций, тем лучше будет архитектура! </li>
<li>средство <em>тестирования</em> для сокращения внешних зависимостей и проверки взаимодействия между вашим модулем и его связями.</li>
</ul>
<h2 id="markdown-header-">С чего начать?</h2>
<p>Использовать Google Mock очень просто! Внутри вашего исходного текста на С++ подключите <code>&lt;gtest/gtest.h&gt;</code> и <code>&lt;gmock/gmock.h&gt;</code>, и все готово.</p>
<h2 id="markdown-header-mock-">Mock-объект Черепаха</h2>
<p>Рассмотрим пример. Допустим, вы разрабатываете графическую программу, которая использует для рисования интерфейс в стиле языка Лого. Как вам убедиться что программа все делает правильно? Например, вы можете ее запустить и сравнить картинку на экране с эталонной, но признайтесь: подобное тестирование дорого и работает нестабильно (вы недавно обновили видеокарту, имеющую более навороченную систему сглаживания, и теперь вам необходимо обновить все эталонные изображения). Если бы все ваши тесты работали так, вам пришлось бы несладко. К счастью вы изучали метод <a data-is-external-link="true" href="http://ru.wikipedia.org/wiki/%D0%92%D0%BD%D0%B5%D0%B4%D1%80%D0%B5%D0%BD%D0%B8%D0%B5_%D0%B7%D0%B0%D0%B2%D0%B8%D1%81%D0%B8%D0%BC%D0%BE%D1%81%D1%82%D0%B8" rel="nofollow">внедрения зависимостей</a> (Dependency Injection) и знаете, что делать: вместо прямого обращения из вашей программы к графическому интерфейсу вы можете добавить еще один уровень абстракции в виде, например, интерфейса <code>Turtle</code>:</p>
<div class="codehilite language-c++"><pre><span></span><span class="k">class</span> <span class="nc">Turtle</span> <span class="p">{</span>
  <span class="p">...</span>
  <span class="k">virtual</span> <span class="o">~</span><span class="n">Turtle</span><span class="p">();</span>
  <span class="k">virtual</span> <span class="kt">void</span> <span class="nf">PenUp</span><span class="p">()</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span>
  <span class="k">virtual</span> <span class="kt">void</span> <span class="nf">PenDown</span><span class="p">()</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span>
  <span class="k">virtual</span> <span class="kt">void</span> <span class="nf">Forward</span><span class="p">(</span><span class="kt">int</span> <span class="n">distance</span><span class="p">)</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span>
  <span class="k">virtual</span> <span class="kt">void</span> <span class="nf">Turn</span><span class="p">(</span><span class="kt">int</span> <span class="n">degrees</span><span class="p">)</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span>
  <span class="k">virtual</span> <span class="kt">void</span> <span class="nf">GoTo</span><span class="p">(</span><span class="kt">int</span> <span class="n">x</span><span class="p">,</span> <span class="kt">int</span> <span class="n">y</span><span class="p">)</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span>
  <span class="k">virtual</span> <span class="kt">int</span> <span class="nf">GetX</span><span class="p">()</span> <span class="k">const</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span>
  <span class="k">virtual</span> <span class="kt">int</span> <span class="nf">GetY</span><span class="p">()</span> <span class="k">const</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span>
<span class="p">};</span>
</pre></div>


<p>(Важно, чтобы деструктор класса <code>Turtle</code> <em>обязательно</em> был виртуальным, это влияет на <em>все</em> классы, унаследованные от него, а иначе деструктор унаследованного класса не будет вызван при удалении объекта через указатель на базовый класс, что может привести к утечкам памяти.)</p>
<p>Функции <code>PenUp()</code> и <code>PenDown()</code> позволяют управлять режимом, когда движение черепахи будет оставлять след, а когда нет. Передвижения же контролируются функциями <code>Forward()</code>, <code>Turn()</code>, и <code>GoTo()</code>. И наконец, функциями <code>GetX()</code> и <code>GetY()</code> вы можете получить текущую позицию черепахи.</p>
<p>Ваша программа обычно будет использовать настоящую реализацию этого интерфейса. В тестах же вы можете использовать mock-реализацию. Это позволяет вам легко проверять, какие функции рисования вызывает ваша программа, с какими аргументами и в каком порядке. Тесты, написанные таким образом, будут более надежными (например, на них не повлияет тот факт, что ваш новый компьютер выполняет сглаживание немного по-другому), простыми в понимании и дальнейшей модификации (смысл теста будет выражаться программным кодом, а не какими-то двоичными изображениями), и работать они будут <em>гораздо, гораздо быстрее</em>.</p>
<h2 id="markdown-header-mock-_1">Создание Mock-класса</h2>
<p>Хорошо, конечно, когда можно использовать mock-классы кем-то уже созданные. Если, однако, вам надо писать их самостоятельно, то расслабьтесь - Google Mock превратит это в увлекательную игру! (Ну почти.)</p>
<h3 id="markdown-header-mock-_2">Определение mock-класса</h3>
<p>Взяв <code>Turtle</code> в качестве примера, вы можете выполнить следующие шаги:</p>
<ul>
<li>Унаследуйте класс <code>MockTurtle</code> от <code>Turtle</code>.</li>
<li>Выберите виртуальную функцию в классе <code>Turtle</code>. Посчитайте, сколько у нее аргументов.</li>
<li>В разделе <code>public:</code> дочернего класса напишите <code>MOCK_METHODn();</code> (или <code>MOCK_CONST_METHODn()</code>; если это константная функция), где <code>n</code> количество аргументов функции. Если вы ошибетесь, то компилятор выдаст ошибку.</li>
<li>А вот сейчас самое интересное: перенесите <em>имя функции</em> в первый аргумент макроса <code>MOCK_...</code>, убрав ее из оригинального описания, затем перенесите все что осталось (после удаления имени функции) во <em>второй</em> аргумент макроса (на самом деле - это будет <em>тип функции</em>).</li>
<li>Повторите это для всех виртуальных функций, которые вы хотите включить в mock-класс.</li>
</ul>
<p>После этого процесса вы получите что-то типа:</p>
<div class="codehilite language-c++"><pre><span></span><span class="cp">#include</span> <span class="cpf">&lt;gmock/gmock.h&gt;  // Заголовочный файл Google Mock.</span><span class="cp"></span>
<span class="k">class</span> <span class="nc">MockTurtle</span> <span class="o">:</span> <span class="k">public</span> <span class="n">Turtle</span> <span class="p">{</span>
 <span class="k">public</span><span class="o">:</span>
  <span class="p">...</span>
  <span class="n">MOCK_METHOD0</span><span class="p">(</span><span class="n">PenUp</span><span class="p">,</span> <span class="kt">void</span><span class="p">());</span>
  <span class="n">MOCK_METHOD0</span><span class="p">(</span><span class="n">PenDown</span><span class="p">,</span> <span class="kt">void</span><span class="p">());</span>
  <span class="n">MOCK_METHOD1</span><span class="p">(</span><span class="n">Forward</span><span class="p">,</span> <span class="kt">void</span><span class="p">(</span><span class="kt">int</span> <span class="n">distance</span><span class="p">));</span>
  <span class="n">MOCK_METHOD1</span><span class="p">(</span><span class="n">Turn</span><span class="p">,</span> <span class="kt">void</span><span class="p">(</span><span class="kt">int</span> <span class="n">degrees</span><span class="p">));</span>
  <span class="n">MOCK_METHOD2</span><span class="p">(</span><span class="n">GoTo</span><span class="p">,</span> <span class="kt">void</span><span class="p">(</span><span class="kt">int</span> <span class="n">x</span><span class="p">,</span> <span class="kt">int</span> <span class="n">y</span><span class="p">));</span>
  <span class="n">MOCK_CONST_METHOD0</span><span class="p">(</span><span class="n">GetX</span><span class="p">,</span> <span class="kt">int</span><span class="p">());</span>
  <span class="n">MOCK_CONST_METHOD0</span><span class="p">(</span><span class="n">GetY</span><span class="p">,</span> <span class="kt">int</span><span class="p">());</span>
<span class="p">};</span>
</pre></div>


<p>Вам не нужно определять эти mock-методы где-либо - макросы <code>MOCK_METHOD*</code> автоматически сгенерируют эти методы. Вот так все просто! Немного потренировавшись, вы можете выдавать mock-классы быстрее, чем ваша системы контроля версий будет их принимать.</p>
<p><em>Подсказка:</em> В принципе, если даже это вам делать неохота, то вам понравится скрипт <code>gmock_gen.py</code> в каталога <code>scripts/generator/</code> библиотеки Google Mock (наше почтение проекту <a data-is-external-link="true" href="http://code.google.com/p/cppclean/" rel="nofollow">cppclean</a>). Этот скрипт требует наличия Python 2.4 на вашей машине. Вы просто задаете в командной строке имя исходного файла на С++ и имя абстрактного класса, в нем определенного, и получаете на выходе определение mock-класса. Из-за сложности синтаксиса C++ этот скрипт иногда может не срабатывать, но когда он работает - это очень удобно. За более подробной информацией обратитесь к его <a data-is-external-link="true" href="https://github.com/google/googletest/blob/master/googlemock/scripts/generator/README" rel="nofollow">документации</a>.</p>
<h3 id="markdown-header-mock-_3">Куда помещать mock-класс</h3>
<p>Когда вы определили mock-класс, вам нужно решить, где поместить его определение. Некоторые люди помещают их в <code>*_test.cc</code>. Это удобно, когда тестируемый интерфейс или класс (например <code>Foo</code>) разрабатывается тем же человеком или командой. Иначе, если автор <code>Foo</code> изменит его, то ваш тест может перестать работать. (Нельзя ведь ожидать, что автор <code>Foo</code> исправит каждый тест, который его использует, не так ли?)</p>
<p>Поэтому обычно делают так: если вам нужно сделать mock-объект для класса <code>Foo</code>, который разрабатывается другими людьми, определите mock-класс в модуле <code>Foo</code> (удобнее, чтобы это был подмодуль <code>testing</code>, так как можно  легко отделить основной код от тестов), и назовите файл <code>mock_foo.h</code>. После этого все могут ссылаться на <code>mock_foo.h</code> из своих тестов. Если <code>Foo</code> изменится, то надо будет подправить только одну копию <code>MockFoo</code> и только те тесты, которые зависят от измененных методов <code>Foo</code>.</p>
<p>Есть и другой способ это сделать: можно ввести дополнительный уровень абстракции <code>FooAdaptor</code> над классом <code>Foo</code> и использовать его интерфейс. Так как тут уже вы являетесь автором <code>FooAdaptor</code>, будет намного проще следовать возможным изменениям в классе <code>Foo</code>. Изначально работы, конечно, больше, но правильно выбранный интерфейс <code>FooAdaptor</code> сделает код более простым и понятным (в долгосрочной перспективе), так как можно сделать <code>FooAdaptor</code> более подходящим конкретно для ваших нужд, нежели сам класс <code>Foo</code>.</p>
<h2 id="markdown-header-mock-_4">Использование Mock-объектов в тестах</h2>
<p>Когда mock-класс уже имеется, все просто. И его использование может выглядеть так:</p>
<ul>
<li>Импортируйте необходимые вам имена из Google Mock из пространства имен <code>testing</code>, чтобы можно было использовать эти имена без дополнительного префикса (Это надо сделать только один раз для каждого файла. Помните, что пространства имен являются отличным механизмом и значительно упрощают жизнь.).</li>
<li>Создайте mock-объекты.</li>
<li>Задайте их предполагаемое использование (сколько раз методы будут вызываться, с какими аргументами, и что при этом надо делать и т.д.).</li>
<li>Выполните код, использующий эти mock-объекты. Дополнительно можно использовать утверждения (assertions) из библиотеки Google Code. Если mock-объект был вызван более чем предполагаемое количество раз или с неверными аргументами, вы немедленно получите сообщение об ошибке.</li>
<li>Когда mock-объект уничтожается, Google Mock автоматически проверит, все ли заданные предположения для этого объекта выполнены.</li>
</ul>
<p>Например:</p>
<div class="codehilite language-c++"><pre><span></span><span class="cp">#include</span> <span class="cpf">&quot;путь/к/mock-turtle.h&quot;</span><span class="cp"></span>
<span class="cp">#include</span> <span class="cpf">&lt;gmock/gmock.h&gt;</span><span class="cp"></span>
<span class="cp">#include</span> <span class="cpf">&lt;gtest/gtest.h&gt;</span><span class="cp"></span>
<span class="k">using</span> <span class="o">::</span><span class="n">testing</span><span class="o">::</span><span class="n">AtLeast</span><span class="p">;</span>                     <span class="c1">// #1</span>

<span class="n">TEST</span><span class="p">(</span><span class="n">PainterTest</span><span class="p">,</span> <span class="n">CanDrawSomething</span><span class="p">)</span> <span class="p">{</span>
  <span class="n">MockTurtle</span> <span class="n">turtle</span><span class="p">;</span>                          <span class="c1">// #2</span>
  <span class="n">EXPECT_CALL</span><span class="p">(</span><span class="n">turtle</span><span class="p">,</span> <span class="n">PenDown</span><span class="p">())</span>              <span class="c1">// #3</span>
      <span class="p">.</span><span class="n">Times</span><span class="p">(</span><span class="n">AtLeast</span><span class="p">(</span><span class="mi">1</span><span class="p">));</span>

  <span class="n">Painter</span> <span class="nf">painter</span><span class="p">(</span><span class="o">&amp;</span><span class="n">turtle</span><span class="p">);</span>                   <span class="c1">// #4</span>

  <span class="n">EXPECT_TRUE</span><span class="p">(</span><span class="n">painter</span><span class="p">.</span><span class="n">DrawCircle</span><span class="p">(</span><span class="mi">0</span><span class="p">,</span> <span class="mi">0</span><span class="p">,</span> <span class="mi">10</span><span class="p">));</span>
<span class="p">}</span>                                             <span class="c1">// #5</span>

<span class="kt">int</span> <span class="n">main</span><span class="p">(</span><span class="kt">int</span> <span class="n">argc</span><span class="p">,</span> <span class="kt">char</span><span class="o">**</span> <span class="n">argv</span><span class="p">)</span> <span class="p">{</span>
  <span class="c1">// Данная строка должна быть выполнена для инициализации Google Mock</span>
  <span class="c1">// и Google Test) до запуска тестов.</span>
  <span class="o">::</span><span class="n">testing</span><span class="o">::</span><span class="n">InitGoogleMock</span><span class="p">(</span><span class="o">&amp;</span><span class="n">argc</span><span class="p">,</span> <span class="n">argv</span><span class="p">);</span>
  <span class="k">return</span> <span class="nf">RUN_ALL_TESTS</span><span class="p">();</span>
<span class="p">}</span>
</pre></div>


<p>Как вы догадались, этот тест проверяет, что <code>PenDown()</code> должен вызываться как минимум один раз. Если объект <code>painter</code> не вызвал этот метод, то тест выдаст сообщение об ошибке:</p>
<div class="codehilite language-c++"><pre><span></span><span class="n">path</span><span class="o">/</span><span class="n">to</span><span class="o">/</span><span class="n">my_test</span><span class="p">.</span><span class="nl">cc</span><span class="p">:</span><span class="mi">119</span><span class="o">:</span> <span class="n">Failure</span>
<span class="n">Actual</span> <span class="n">function</span> <span class="n">call</span> <span class="n">count</span> <span class="n">doesn</span><span class="err">&#39;</span><span class="n">t</span> <span class="n">match</span> <span class="k">this</span> <span class="nl">expectation</span><span class="p">:</span>
<span class="nl">Actually</span><span class="p">:</span> <span class="n">never</span> <span class="n">called</span><span class="p">;</span>
<span class="nl">Expected</span><span class="p">:</span> <span class="n">called</span> <span class="n">at</span> <span class="n">least</span> <span class="n">once</span><span class="p">.</span>
</pre></div>


<p><em>Подсказка 1:</em> Если вы запускаете тест из буфера Emacs, то нажав <code>&lt;Enter&gt;</code> на номере строки в сообщении об ошибке, вы перейдете прямо к месту в тестах, где происходит сбой.</p>
<p><em>Подсказка 2:</em> Если mock-объект никогда не удаляется, то финальная проверка не сработает. Поэтому неплохо бы использовать какой-нибудь контроль динамической памяти в тестах, если mock-объекты создаются в куче.</p>
<p><em>Важное замечание:</em> Google Mock требует установки ожиданий <em>до</em> вызова функций mock-класса, иначе поведение программы будет <em>неопределенным</em>. В частности, нельзя чередовать вызовы <code>EXPECT_CALL()</code> и вызовы методов mock-класса.</p>
<p>Это значит, что <code>EXPECT_CALL()</code> должен пониматься как ожидаемый вызов <em>в будущем</em>, а не как вызов, который уже произошел. Почему Google Mock работает таким образом? А потому, что предоварительное описание ожидаемого поведения позволяет Google Mock сообщать об ошибках немедленно по мере их возникновения, пока состояние программы (стек, например) все еще доступно. Отладка в этом случае становится намного проще.</p>
<p>Правда, рассмотренный тест довольно искусственный и особо важной работы не делает. Вы можете легко сделать тоже самое и без Google Mock. Однако, вы скоро поймете, что Google Mock позволяет делать гораздо больше.</p>
<h3 id="markdown-header-google-mock_1">Использование Google Mock с другими библиотеками тестирования</h3>
<p>Если вы используете что-то отличное от Google Test (например, <a data-is-external-link="true" href="http://apps.sourceforge.net/mediawiki/cppunit/index.php?title=Main_Page" rel="nofollow">CppUnit</a> или <a data-is-external-link="true" href="http://cxxtest.tigris.org/" rel="nofollow">CxxTest</a>), то просто подправьте функцию <code>main()</code> в предыдущем примере:</p>
<div class="codehilite language-c++"><pre><span></span><span class="kt">int</span> <span class="nf">main</span><span class="p">(</span><span class="kt">int</span> <span class="n">argc</span><span class="p">,</span> <span class="kt">char</span><span class="o">**</span> <span class="n">argv</span><span class="p">)</span> <span class="p">{</span>
  <span class="c1">// Данная строка устанавливает Google Mock бросать исключение при ошибке,</span>
  <span class="c1">// которое может быть использовано вашей библиотекой тестирования как ошибка.</span>
  <span class="o">::</span><span class="n">testing</span><span class="o">::</span><span class="n">GTEST_FLAG</span><span class="p">(</span><span class="n">throw_on_failure</span><span class="p">)</span> <span class="o">=</span> <span class="nb">true</span><span class="p">;</span>
  <span class="o">::</span><span class="n">testing</span><span class="o">::</span><span class="n">InitGoogleMock</span><span class="p">(</span><span class="o">&amp;</span><span class="n">argc</span><span class="p">,</span> <span class="n">argv</span><span class="p">);</span>
  <span class="c1">// ... все, что требуется для вашей библиотеки тестирования ...</span>
<span class="p">}</span>
</pre></div>


<h2 id="markdown-header-_1">Установка предположений</h2>
<p>Ключевыми моментом в использовании mock-объекта является установка <em>правильных предположений</em> о нем. Если предположения слишком строгие, то ваш тест может дать сбой из-за не относящихся к вашему классу изменений. Если наоборот, слишком слабые, то можно пропустить ошибку. Надо стараться, чтобы ваш тест ловил те ошибки, которые могут потенциально возникнуть. Google Mock обеспечивает вас всем необходимым, чтобы сделать это "как надо".</p>
<h3 id="markdown-header-_2">Общий синтаксис</h3>
<p>В Google Mock мы используем макрос <code>EXPECT_CALL()</code> для установки предположений о поведении mock-объекта. Выглядит это так:</p>
<div class="codehilite language-c++"><pre><span></span><span class="n">EXPECT_CALL</span><span class="p">(</span><span class="n">mock_object</span><span class="p">,</span> <span class="n">method</span><span class="p">(</span><span class="n">matchers</span><span class="p">))</span>
    <span class="p">.</span><span class="n">Times</span><span class="p">(</span><span class="n">cardinality</span><span class="p">)</span>
    <span class="p">.</span><span class="n">WillOnce</span><span class="p">(</span><span class="n">action</span><span class="p">)</span>
    <span class="p">.</span><span class="n">WillRepeatedly</span><span class="p">(</span><span class="n">action</span><span class="p">);</span>
</pre></div>


<p>Этот макрос имеет два аргумента: mock-объект и его метод с аргументами. Необходимо отметить, что эти два аргумента макроса разделены запятой (<code>,</code>), а не точкой (<code>.</code>). (Почему запятая? Из-за технических соображений.)</p>
<p>За макросом могут следовать необязательные <em>операторы</em> для задания дополнительной информации о текущем предположении. Мы обсудим, как каждый из них работает чуть ниже.</p>
<p>Общий синтаксис разработан так, что быть похожим просто на английский язык. Например, несложно догадаться, что:</p>
<div class="codehilite language-c++"><pre><span></span><span class="k">using</span> <span class="o">::</span><span class="n">testing</span><span class="o">::</span><span class="n">Return</span><span class="p">;...</span>
<span class="n">EXPECT_CALL</span><span class="p">(</span><span class="n">turtle</span><span class="p">,</span> <span class="n">GetX</span><span class="p">())</span>
    <span class="p">.</span><span class="n">Times</span><span class="p">(</span><span class="mi">5</span><span class="p">)</span>
    <span class="p">.</span><span class="n">WillOnce</span><span class="p">(</span><span class="n">Return</span><span class="p">(</span><span class="mi">100</span><span class="p">))</span>
    <span class="p">.</span><span class="n">WillOnce</span><span class="p">(</span><span class="n">Return</span><span class="p">(</span><span class="mi">150</span><span class="p">))</span>
    <span class="p">.</span><span class="n">WillRepeatedly</span><span class="p">(</span><span class="n">Return</span><span class="p">(</span><span class="mi">200</span><span class="p">));</span>
</pre></div>


<p>означает, что метод <code>GetX()</code> объекта <code>turtle</code> должен быть вызван пять раз. Первый раз он должен вернуть 100, второй раз 150 и 200 все последующие разы. Иногда это называют синтаксисом <a data-is-external-link="true" href="http://ru.wikipedia.org/wiki/%D0%9F%D1%80%D0%B5%D0%B4%D0%BC%D0%B5%D1%82%D0%BD%D0%BE-%D0%BE%D1%80%D0%B8%D0%B5%D0%BD%D1%82%D0%B8%D1%80%D0%BE%D0%B2%D0%B0%D0%BD%D0%BD%D1%8B%D0%B9_%D1%8F%D0%B7%D1%8B%D0%BA_%D0%BF%D1%80%D0%BE%D0%B3%D1%80%D0%B0%D0%BC%D0%BC%D0%B8%D1%80%D0%BE%D0%B2%D0%B0%D0%BD%D0%B8%D1%8F" rel="nofollow">Предметно-ориентированного языка программирования</a>.</p>
<p><em>Замечание:</em> Почему мы используем для этого макрос? Тут две причины, первая, что надо делать предположения видимыми в тексте (либо через <code>grep</code>, либо просто человеческому глазу), и вторая, что это позволяет Google Mock определить имя файла и номер строки, где произошел сбой теста. Это значительно упрощает отладку.</p>
<h3 id="markdown-header-matchers-expect_call">Matchers: аргументы макроса <code>EXPECT_CALL()</code></h3>
<p>Когда функция mock-объекта имеет аргументы (формальные параметры), мы просто задаем их желаемые значения, например:</p>
<div class="codehilite language-c++"><pre><span></span><span class="c1">// Ожидаем, что `turtle` сдвинется вперед на 100 единиц.</span>
<span class="n">EXPECT_CALL</span><span class="p">(</span><span class="n">turtle</span><span class="p">,</span> <span class="n">Forward</span><span class="p">(</span><span class="mi">100</span><span class="p">));</span>
</pre></div>


<p>Иногда нет необходимости указывать все слишком конкретно (Помните, что бывает, когда тесты слишком строгие?) Чрезмерная конкретность делает тесты неустойчивыми и несколько затуманивает саму цель тестирования. Мы призываем фокусироваться исключительно на том, что тестируется - ни больше, ни меньше. Если вам интересно просто проверить, вызывается ли <code>Forward()</code>, и неважно с каким аргументом, напишите <code>_</code> в качестве аргумента, что будет означать "все что угодно".</p>
<div class="codehilite language-c++"><pre><span></span><span class="k">using</span> <span class="o">::</span><span class="n">testing</span><span class="o">::</span><span class="n">_</span><span class="p">;</span>
<span class="p">...</span>
<span class="c1">// Expects the turtle to move forward.</span>
<span class="c1">// Ожидаем, что `turtle` сдвинется вперед.</span>
<span class="n">EXPECT_CALL</span><span class="p">(</span><span class="n">turtle</span><span class="p">,</span> <span class="n">Forward</span><span class="p">(</span><span class="n">_</span><span class="p">));</span>
</pre></div>


<p><code>_</code> - это то, что мы называем <em>matcher</em>'ы. Matcher - это предикат, который используется чтобы поверить, является ли его аргумент тем, чем мы ожидаем. Вы можете использовать matcher'ы внутри макроса <code>EXPECT_CALL()</code> везде, где подразумевается аргумент функции.</p>
<p>Список встроенных matcher'ов можно найти в <a data-is-external-link="true" href="https://github.com/google/googletest/blob/master/googlemock/docs/CheatSheet.md" rel="nofollow">CheatSheet</a>. Например, <code>Ge</code> (больше или равно):</p>
<div class="codehilite language-c++"><pre><span></span><span class="k">using</span> <span class="o">::</span><span class="n">testing</span><span class="o">::</span><span class="n">Ge</span><span class="p">;...</span>
<span class="n">EXPECT_CALL</span><span class="p">(</span><span class="n">turtle</span><span class="p">,</span> <span class="n">Forward</span><span class="p">(</span><span class="n">Ge</span><span class="p">(</span><span class="mi">100</span><span class="p">)));</span>
</pre></div>


<p>Данный код проверяет, что объекту <code>turtle</code> будет сказано продвинуться вперед как минимум на 100 единиц.</p>
<h3 id="markdown-header-_3">Количество повторений: сколько раз метод может быть вызван?</h3>
<p>В первом примере мы использовали <code>Times()</code> сразу после вызова <code>EXPECT_CALL()</code>. Мы назвали его аргумент <em>количеством повторений</em>, и он означает  - <em>сколько раз</em> этот вызов должен произойти. Это дает нам возможность повторять ожидания любое количество раз без повторного их написания. Также важно, что количество повторений может быть нечетким, как и обычный matcher, что позволяет сформулировать цель теста максимально точно.</p>
<p>Интересным является случай, когда написано <code>Times(0)</code>. Как вы, может быть, успели догадаться - это значит, что функция вообще не должна быть вызвана с указанными аргументами, и Google Mock сгенерирует ошибку, если вдруг функция-таки была ошибочно вызвана.</p>
<p>Мы видели использование <code>AtLeast(n)</code> как пример нечеткого количества повторений. Можно обратиться к <a data-is-external-link="true" href="https://github.com/google/googletest/blob/master/googlemock/docs/CheatSheet.md" rel="nofollow">CheatSheet</a> для получения полного списка функций задания количества повторений.</p>
<p>В принципе, вызов <code>Times()</code> может быть опущен. Если <code>Times()</code> не используется в явном виде, то Google Mock <em>установит количество повторений по умолчанию</em> по следующим правилам:</p>
<ul>
<li>
<p>Если <em>ни</em> <code>WillOnce()</code> <em>ни</em> <code>WillRepeatedly()</code> не используются в <code>EXPECT_CALL()</code>, то подразумевается вызов <code>Times(1)</code>.</p>
</li>
<li>
<p>Если используется <code>WillOnce()</code> <code>n</code> раз, но <code>WillRepeatedly()</code> не используется, и <code>n</code> &gt;= 1, то подразумевается <code>Times(n)</code>.</p>
</li>
<li>
<p>Если используется <code>WillOnce()</code> <code>n</code> раз и один раз <code>WillRepeatedly()</code>, и <code>n</code> &gt;= 0, то подразумевается <code>Times(AtLeast(n))</code>.</p>
</li>
</ul>
<p><em>Вопрос:</em> Как вы думаете, что произойдет, если функция должна быть вызвана дважды, но реально вызвана четыре раза?</p>
<h3 id="markdown-header-_4">Действия: что делать, если...</h3>
<p>Напомним, что mock-объект не имеет реальной работающей логики. Мы, как пользователи, просто задаем, что делать, когда вызываются методы mock-объекта. В Google Mock это делается очень просто.</p>
<p>Для начала, если возвращаемое методом mock-объекта значение является встроенным типом или указателем, функция выполняет <em>действие по умолчанию</em> (<code>void</code> функция просто вернет управление, <code>bool</code> функция вернет <code>false</code>, остальные функции вернут <code>0</code>). Если ничего специально не указывать, то будет использоваться такая логика.</p>
<p>Второе, если функция mock-объекта не имеет действия по умолчанию, или действие по умолчанию вам не подходит, то необходимо задать, что должна возвращать функция при каждом срабатывании <code>WillOnce()</code>, за которым может следовать <code>WillRepeatedly()</code>. Например:</p>
<div class="codehilite language-c++"><pre><span></span><span class="k">using</span> <span class="o">::</span><span class="n">testing</span><span class="o">::</span><span class="n">Return</span><span class="p">;...</span>
<span class="n">EXPECT_CALL</span><span class="p">(</span><span class="n">turtle</span><span class="p">,</span> <span class="n">GetX</span><span class="p">())</span>
    <span class="p">.</span><span class="n">WillOnce</span><span class="p">(</span><span class="n">Return</span><span class="p">(</span><span class="mi">100</span><span class="p">))</span>
    <span class="p">.</span><span class="n">WillOnce</span><span class="p">(</span><span class="n">Return</span><span class="p">(</span><span class="mi">200</span><span class="p">))</span>
    <span class="p">.</span><span class="n">WillOnce</span><span class="p">(</span><span class="n">Return</span><span class="p">(</span><span class="mi">300</span><span class="p">));</span>
</pre></div>


<p>В данном примере <code>turtle.GetX()</code> будет вызвана <em>в точности три раза</em> (Google Mock предполагает это из количества использованных <code>WillOnce()</code>, так как мы явно не указали это через <code>Times()</code>), и должна будет вернуть 100, 200 и 300 соответственно.</p>
<div class="codehilite language-c++"><pre><span></span><span class="k">using</span> <span class="o">::</span><span class="n">testing</span><span class="o">::</span><span class="n">Return</span><span class="p">;...</span>
<span class="n">EXPECT_CALL</span><span class="p">(</span><span class="n">turtle</span><span class="p">,</span> <span class="n">GetY</span><span class="p">())</span>
    <span class="p">.</span><span class="n">WillOnce</span><span class="p">(</span><span class="n">Return</span><span class="p">(</span><span class="mi">100</span><span class="p">))</span>
    <span class="p">.</span><span class="n">WillOnce</span><span class="p">(</span><span class="n">Return</span><span class="p">(</span><span class="mi">200</span><span class="p">))</span>
    <span class="p">.</span><span class="n">WillRepeatedly</span><span class="p">(</span><span class="n">Return</span><span class="p">(</span><span class="mi">300</span><span class="p">));</span>
</pre></div>


<p>означает, что <code>turtle.GetY()</code> будет вызвана <em>как минимум дважды</em> (Google Mock знает это, так как мы использовали <code>WillOnce()</code> дважды с последующим <code>WillRepeatedly()</code>, а не явно указали это через <code>Times()</code>), и должна вернуть 100 первый раз, затем 200 во второй раз и 300 все последующие разы.</p>
<p>Конечно, если просто написать <code>Times()</code>, то Google Mock не будет делать никаких предположений о количестве повторений, так как их число указано явно. А что если, число, которое вы указали в <code>Times()</code> больше, чем число использованных <code>WillOnce()</code>? В этом случае <code>WillOnce()</code> будет использована необходимое дополнительное количество раз, и Google Mock будет использовать действие <em>по умолчанию</em> для каждого такого вызова (если, конечно, вы не использовали <code>WillRepeatedly()</code>.).</p>
<p>Что еще мы можем использовать в <code>WillOnce()</code> кроме <code>Return()</code>? Вы можете вернуть ссылку через <code>ReturnRef(variable)</code>, или задействовать одну из готовых действий из <a data-is-external-link="true" href="https://github.com/google/googletest/blob/master/googlemock/docs/CheatSheet.md" rel="nofollow">CheatSheet</a>.</p>
<p><em>Важное замечание:</em> Оператор <code>EXPECT_CALL()</code> вычисляется только один раз, несмотря на то, что действие может выполняться несколько раз. Поэтому следует помнить о побочных эффектах. Например, данный код не будет делать то, что мы, возможно, ожидаем:</p>
<div class="codehilite language-c++"><pre><span></span><span class="kt">int</span> <span class="n">n</span> <span class="o">=</span> <span class="mi">100</span><span class="p">;</span>
<span class="n">EXPECT_CALL</span><span class="p">(</span><span class="n">turtle</span><span class="p">,</span> <span class="n">GetX</span><span class="p">())</span>
    <span class="p">.</span><span class="n">Times</span><span class="p">(</span><span class="mi">4</span><span class="p">)</span>
    <span class="p">.</span><span class="n">WillOnce</span><span class="p">(</span><span class="n">Return</span><span class="p">(</span><span class="n">n</span><span class="o">++</span><span class="p">));</span>
</pre></div>


<p>Вместо выдачи последовательных значений 100, 101, 102, ..., и т.д., эта функция будет всегда возвращать 100, так как <code>n++</code> будет вычислено только один раз. Аналогично, <code>Return (new Foo)</code> создаст новый объект <code>Foo</code>, когда <code>EXPECT_CALL()</code> будет выполнен, и будет возвращать тот же самый указатель каждый раз. Если вы хотите, чтобы побочный эффект случался каждый раз, то надо создать свой тип действия. Как это сделать мы расскажем в <a data-is-external-link="true" href="https://github.com/google/googletest/blob/master/googlemock/docs/CookBook.md" rel="nofollow">CookBook</a>.</p>
<p>Время для еще одной загадки! Как вы думаете, что это значит?</p>
<div class="codehilite language-c++"><pre><span></span><span class="k">using</span> <span class="o">::</span><span class="n">testing</span><span class="o">::</span><span class="n">Return</span><span class="p">;...</span>
<span class="n">EXPECT_CALL</span><span class="p">(</span><span class="n">turtle</span><span class="p">,</span> <span class="n">GetY</span><span class="p">())</span>
    <span class="p">.</span><span class="n">Times</span><span class="p">(</span><span class="mi">4</span><span class="p">)</span>
    <span class="p">.</span><span class="n">WillOnce</span><span class="p">(</span><span class="n">Return</span><span class="p">(</span><span class="mi">100</span><span class="p">));</span>
</pre></div>


<p>Понятно, что <code>turtle.GetY()</code> должна быть вызвана четыре раза. Но если вы думаете, что каждый раз будет возвращаться значение 100, то подумайте еще раз! Помните, что <code>WillOnce()</code> используется только один раз, и после будет применяться действие по умолчанию. Получается, что правильный ответ такой: первый раз <code>turtle.GetY()</code> вернет 100, но <em>все последующие разы будет возвращаться 0</em>, так как возвращение 0 - это действие по умолчанию для функции типа <code>int</code>.</p>
<h3 id="markdown-header-_5">Использование множественных предположений</h3>
<p>До сих пор мы использовали в примерах только одиночные предположения. В реальности, вы можете задавать предположения для нескольких методов mock-объекта, которые будут принадлежать разным mock-объектам.</p>
<p>По умолчанию, когда вызывается метод mock-объекта, Google Mock будет искать заданные предположения в <em>обратном их определению порядке</em> до тех пор, пока не будет найдено предположение, совпадающие по аргументам (по аналогии с "новое правило может перекрывать предыдущие"). Если найденное ожидание не может принять более вызовов, то возникнет ошибка превышения допустимого количества вызовов. Например:</p>
<div class="codehilite language-c++"><pre><span></span><span class="k">using</span> <span class="o">::</span><span class="n">testing</span><span class="o">::</span><span class="n">_</span><span class="p">;...</span>
<span class="n">EXPECT_CALL</span><span class="p">(</span><span class="n">turtle</span><span class="p">,</span> <span class="n">Forward</span><span class="p">(</span><span class="n">_</span><span class="p">));</span>  <span class="c1">// #1</span>
<span class="n">EXPECT_CALL</span><span class="p">(</span><span class="n">turtle</span><span class="p">,</span> <span class="n">Forward</span><span class="p">(</span><span class="mi">10</span><span class="p">))</span>  <span class="c1">// #2</span>
    <span class="p">.</span><span class="n">Times</span><span class="p">(</span><span class="mi">2</span><span class="p">);</span>
</pre></div>


<p>Если <code>Forward(10)</code> вызван три раза подряд, то третий вызов приведет к ошибке, так как ожидание #2 может принять только два вызова. Однако, если третий вызов будет не <code>Forward(10)</code>, а <code>Forward(20)</code>, то ошибки не будет, так как этот вызов будет обработан предположением #1.</p>
<p><em>Заметка на полях:</em> Почему Google Mock ищет утверждения в <em>обратном</em> порядке? Причина в том, что это позволяет пользователю задавать ожидания по умолчанию в конструкторе mock-объекта или при инициализации тестового класса (test fixture), и затем настраивать mock-объект под конкретный случай в теле самого теста. Так что, если вы имеете два предположения для одного метода, вы захотите поместить более специализированный вариант <em>после</em> других, или более специализированное правило будет перекрыто более общим, следующим за ним.</p>
<h3 id="markdown-header-_6">Упорядоченные и неупорядоченные вызовы</h3>
<p>По умолчанию, предположения могут совпадать с вызовом, даже если предыдущие предположения не были удовлетворены. Другими словами, вызовы не обязаны происходить в порядке задания предположений.</p>
<p>Иногда вам может понадобиться, чтобы все предположения срабатывали в установленном порядке. Для этого нужно сделать следующее:</p>
<div class="codehilite language-c++"><pre><span></span><span class="k">using</span> <span class="o">::</span><span class="n">testing</span><span class="o">::</span><span class="n">InSequence</span><span class="p">;...</span>
<span class="n">TEST</span><span class="p">(</span><span class="n">FooTest</span><span class="p">,</span> <span class="n">DrawsLineSegment</span><span class="p">)</span> <span class="p">{</span>
  <span class="p">...</span>
  <span class="p">{</span>
    <span class="n">InSequence</span> <span class="n">dummy</span><span class="p">;</span>

    <span class="n">EXPECT_CALL</span><span class="p">(</span><span class="n">turtle</span><span class="p">,</span> <span class="n">PenDown</span><span class="p">());</span>
    <span class="n">EXPECT_CALL</span><span class="p">(</span><span class="n">turtle</span><span class="p">,</span> <span class="n">Forward</span><span class="p">(</span><span class="mi">100</span><span class="p">));</span>
    <span class="n">EXPECT_CALL</span><span class="p">(</span><span class="n">turtle</span><span class="p">,</span> <span class="n">PenUp</span><span class="p">());</span>
  <span class="p">}</span>
  <span class="n">Foo</span><span class="p">();</span>
<span class="p">}</span>
</pre></div>


<p>При создании объекта типа <code>InSequence</code> все предположения в текущем блоке объединяются в <em>последовательность</em> и должны происходить <em>одно за другим</em>. Так как упорядочивание обеспечивают конструтор и деструктор данного объекта, то его имя роли не играет.</p>
<p>В данном примере мы проверям, что <code>Foo()</code> вызывает три раза перечисленные функции в том порядке, в котором записаны сами предположения. Иначе произойдёт ошибка.</p>
<p>(А что если, вам необходимо задать порядок вызова только для определенных вызовов, но не всех? Можно ли задать нужный порядок только частично? Ответ... да! Потерпите немного и найдете ответ в <a data-is-external-link="true" href="https://github.com/google/googletest/blob/master/googlemock/docs/CookBook.md" rel="nofollow">CookBook</a>). </p>
<h3 id="markdown-header-_7">Все предположения являются "липкими", если не задано обратное</h3>
<p>Небольшая проверка того, как вы уже можете использоваться Google Mock. Как бы вы проверили, что <code>turtle</code> будет сказано переместиться в начало координат <em>в точности</em> два раза, и вы хотите проигнорировать все остальные вызовы? </p>
<p>После того, как напишете свой ответ, посмотрите на наш (но решите сначала сами, не подсматривая!):</p>
<div class="codehilite language-c++"><pre><span></span><span class="k">using</span> <span class="o">::</span><span class="n">testing</span><span class="o">::</span><span class="n">_</span><span class="p">;...</span>
<span class="n">EXPECT_CALL</span><span class="p">(</span><span class="n">turtle</span><span class="p">,</span> <span class="n">GoTo</span><span class="p">(</span><span class="n">_</span><span class="p">,</span> <span class="n">_</span><span class="p">))</span>  <span class="c1">// #1</span>
    <span class="p">.</span><span class="n">Times</span><span class="p">(</span><span class="n">AnyNumber</span><span class="p">());</span>
<span class="n">EXPECT_CALL</span><span class="p">(</span><span class="n">turtle</span><span class="p">,</span> <span class="n">GoTo</span><span class="p">(</span><span class="mi">0</span><span class="p">,</span> <span class="mi">0</span><span class="p">))</span>  <span class="c1">// #2</span>
    <span class="p">.</span><span class="n">Times</span><span class="p">(</span><span class="mi">2</span><span class="p">);</span>
</pre></div>


<p>Предположим, что <code>turtle.GoTo(0, 0)</code> вызывается дважды. На третий раз Google Mock проверит, что аргументы совпадают с предположением #2 (напомним, что мы всегда выбираем последнее предположение из списка подходящих). Теперь, так как мы ожидаем только два вызова, Google Mock сообщит об ошибке. В главе "Использование множественных предположений" мы объяснили, почему это происходит.</p>
<p>В данном примере видно, что <em>предположения Google Mock по умолчанию "липкие"</em> в том смысле, что они остаются активными даже после достижения верхней границы по количеству выполнений. Это важное правило, которое стоит запомнить. Оно затрагивает смысл задания предположений, и также <em>отличается</em> от аналогичных правил в других библиотеках для создания mock-объектов (Почему мы сделали так? Потому, что мы уверены, что наши правила более понятны для большего числа типичных случаев.)</p>
<p>Просто? Проверим, как хорошо вы все поняли: что делает данный пример?</p>
<div class="codehilite language-c++"><pre><span></span><span class="k">using</span> <span class="o">::</span><span class="n">testing</span><span class="o">::</span><span class="n">Return</span><span class="p">;</span>
<span class="p">...</span>
<span class="k">for</span> <span class="p">(</span><span class="kt">int</span> <span class="n">i</span> <span class="o">=</span> <span class="n">n</span><span class="p">;</span> <span class="n">i</span> <span class="o">&gt;</span> <span class="mi">0</span><span class="p">;</span> <span class="n">i</span><span class="o">--</span><span class="p">)</span> <span class="p">{</span>
  <span class="n">EXPECT_CALL</span><span class="p">(</span><span class="n">turtle</span><span class="p">,</span> <span class="n">GetX</span><span class="p">())</span>
      <span class="p">.</span><span class="n">WillOnce</span><span class="p">(</span><span class="n">Return</span><span class="p">(</span><span class="mi">10</span><span class="o">*</span><span class="n">i</span><span class="p">));</span>
<span class="p">}</span>
</pre></div>


<p>Если вы думаете, что <code>turtle.GetX()</code> должен быть вызван <code>n</code> раз и вернет 10, 20, 30, ... и т.д., то подумайте еще раз! Проблема в том, что, как мы сказали, предположения по умолчанию "липкие". Так что при втором вызове <code>turtle.GetX()</code> последний (самый последний) <code>EXPECT_CALL()</code> даст совпадение, что немедленно приведет к ошибке превышения верхней границы. В целом, данный пример весьма бесполезен.</p>
<p>Правильный способ задать предположения для <code>turtle.GetX()</code>, чтобы возвращались значения 10, 20, 30 и т.д. - это явно указать, что данное утверждение "<em>нелипкое</em>". Другими словами, предположение должно становиться неактивным сразу после первого срабатывания:</p>
<div class="codehilite language-c++"><pre><span></span><span class="k">using</span> <span class="o">::</span><span class="n">testing</span><span class="o">::</span><span class="n">Return</span><span class="p">;</span>
<span class="p">...</span>
<span class="k">for</span> <span class="p">(</span><span class="kt">int</span> <span class="n">i</span> <span class="o">=</span> <span class="n">n</span><span class="p">;</span> <span class="n">i</span> <span class="o">&gt;</span> <span class="mi">0</span><span class="p">;</span> <span class="n">i</span><span class="o">--</span><span class="p">)</span> <span class="p">{</span>
  <span class="n">EXPECT_CALL</span><span class="p">(</span><span class="n">turtle</span><span class="p">,</span> <span class="n">GetX</span><span class="p">())</span>
    <span class="p">.</span><span class="n">WillOnce</span><span class="p">(</span><span class="n">Return</span><span class="p">(</span><span class="mi">10</span><span class="o">*</span><span class="n">i</span><span class="p">))</span>
    <span class="p">.</span><span class="n">RetiresOnSaturation</span><span class="p">();</span>
<span class="p">}</span>
</pre></div>


<p>В данном конкретном случае мы также ожидаем, что вызовы будут проходить в определенном порядке, поэтому мы должны выполняемые действия подогнать под этот порядок. Для этого явно зададим их последовательность:</p>
<div class="codehilite language-c++"><pre><span></span><span class="k">using</span> <span class="o">::</span><span class="n">testing</span><span class="o">::</span><span class="n">InSequence</span><span class="p">;</span>
<span class="k">using</span> <span class="o">::</span><span class="n">testing</span><span class="o">::</span><span class="n">Return</span><span class="p">;</span>
<span class="p">...</span>
<span class="p">{</span>
  <span class="n">InSequence</span> <span class="n">s</span><span class="p">;</span>

  <span class="k">for</span> <span class="p">(</span><span class="kt">int</span> <span class="n">i</span> <span class="o">=</span> <span class="mi">1</span><span class="p">;</span> <span class="n">i</span> <span class="o">&lt;=</span> <span class="n">n</span><span class="p">;</span> <span class="n">i</span><span class="o">++</span><span class="p">)</span> <span class="p">{</span>
    <span class="n">EXPECT_CALL</span><span class="p">(</span><span class="n">turtle</span><span class="p">,</span> <span class="n">GetX</span><span class="p">())</span>
        <span class="p">.</span><span class="n">WillOnce</span><span class="p">(</span><span class="n">Return</span><span class="p">(</span><span class="mi">10</span><span class="o">*</span><span class="n">i</span><span class="p">))</span>
        <span class="p">.</span><span class="n">RetiresOnSaturation</span><span class="p">();</span>
  <span class="p">}</span>
<span class="p">}</span>
</pre></div>


<p>Кстати, другая ситуация, когда предположение может не быть "липкими" - это когда за его вызовом срабатывает другое предположение в последовательности. В этом случае предположение автоматически становится неактивным (и больше никогда не сработает).</p>
<h3 id="markdown-header-_8">Неиспользуемые вызовы</h3>
<p>Mock-объект может иметь множество методов, и далеко не все из них важны для тестирования. Например, для некоторых тестов не важно, сколько раз вызываются <code>GetX()</code> и <code>GetY()</code>.</p>
<p>В Google Mock, если какой-то метод вам не нужен, вы можете просто забыть про него. Если произойдет вызов этого метода, вы увидите предупреждение в отчете, но ошибкой это не будет.</p>
<h2 id="markdown-header-_9">Что дальше?</h2>
<p>Поздравляем! Вы узнали достаточно, чтобы начать работать с Google Mock. Теперь вы, возможно, захотите присоединиться к группе <a data-is-external-link="true" href="http://groups.google.com/group/googlemock" rel="nofollow">googlemock</a> и уже начать писать тесты с помощью Google Mock - у вас все получится! Кстати, предупреждаем, это затягивает.</p>
<p>Если вы чувствуете, что как-то пошло, то приступайте к <a data-is-external-link="true" href="https://github.com/google/googletest/blob/master/googlemock/docs/v1_5/CookBook.md" rel="nofollow">CookBook</a>. Там вы узнаете о множестве дополнительных возможностей Google Mock и однозначно повысите уровень наслаждения от тестирования.</p>
  </div>


        </div>
        
      </div>
    </div>
  </div>
  
  <div data-module="source/set-changeset" data-hash="4a33d5b66d6f2b5d4965f09ca2b1a0650ad7a488"></div>



  
    
    
    
  
  

  </div>

        
        
        
      </div>
    </div>
  </div>

      </div>
    </div>
  
</div>

<div id="adg3-dialog"></div>


  

<div data-module="components/mentions/index">
  
    
    
  
  
    
    
  
  
    
    
  
</div>
<div data-module="components/typeahead/emoji/index">
  
    
    
  
</div>

<div data-module="components/repo-typeahead/index">
  
    
    
  
</div>

    
    
  

    
    
  

    
    
  

    
    
  


  


    
    
  

    
    
  



  
  
  <aui-inline-dialog
    id="help-menu-dialog"
    data-aui-alignment="bottom right"

    
    data-aui-alignment-static="true"
    data-module="header/help-menu"
    responds-to="toggle"
    aria-hidden="true">

  <div id="help-menu-section">
    <h1 class="help-menu-heading">Help</h1>

    <form id="help-menu-search-form" class="aui" target="_blank" method="get"
        action="https://support.atlassian.com/customer/search">
      <span id="help-menu-search-icon" class="aui-icon aui-icon-large aui-iconfont-search"></span>
      <input id="help-menu-search-form-input" name="q" class="text" type="text" placeholder="Ask a question">
    </form>

    <ul id="help-menu-links">
      <li>
        <a class="support-ga" data-support-gaq-page="DocumentationHome"
            href="https://confluence.atlassian.com/x/bgozDQ" target="_blank">
          Online help
        </a>
      </li>
      <li>
        <a class="support-ga" data-support-gaq-page="GitTutorials"
            href="https://www.atlassian.com/git?utm_source=bitbucket&amp;utm_medium=link&amp;utm_campaign=help_dropdown&amp;utm_content=learn_git"
            target="_blank">
          Learn Git
        </a>
      </li>
      <li>
        <a id="keyboard-shortcuts-link"
           href="#">Keyboard shortcuts</a>
      </li>
      <li>
        <a class="support-ga" data-support-gaq-page="DocumentationTutorials"
            href="https://confluence.atlassian.com/x/Q4sFLQ" target="_blank">
          Bitbucket tutorials
        </a>
      </li>
      <li>
        <a class="support-ga" data-support-gaq-page="SiteStatus"
            href="https://status.bitbucket.org/" target="_blank">
          Site status
        </a>
      </li>
      <li>
        <a class="support-ga" data-support-gaq-page="Home"
            href="https://support.atlassian.com/bitbucket-cloud/" target="_blank">
          Support
        </a>
      </li>
    </ul>
  </div>
</aui-inline-dialog>
  






  

  <div class="_mustache-templates">
    
      <script id="branch-checkout-template" type="text/html">
        

<div id="checkout-branch-contents">
  <div class="command-line">
    <p>
      Check out this branch on your local machine to begin working on it.
    </p>
    <input type="text" class="checkout-command" readonly="readonly"
        
          value="hg pull && hg update [[branchName]]"
        
        >
  </div>
  
    <div class="sourcetree-callout clone-in-sourcetree"
  data-module="components/clone/clone-in-sourcetree"
  data-https-url="https://bitbucket.org/sonnayasomnambula/googlemockfordummiesrussian"
  data-ssh-url="ssh://hg@bitbucket.org/sonnayasomnambula/googlemockfordummiesrussian">

  <div>
    <button class="aui-button aui-button-primary">
      
        Check out in Sourcetree
      
    </button>
  </div>

  <p class="windows-text">
    
      <a href="http://www.sourcetreeapp.com/?utm_source=internal&amp;utm_medium=link&amp;utm_campaign=clone_repo_win" target="_blank">Atlassian Sourcetree</a>
      is a free Git and Mercurial client for Windows.
    
  </p>
  <p class="mac-text">
    
      <a href="http://www.sourcetreeapp.com/?utm_source=internal&amp;utm_medium=link&amp;utm_campaign=clone_repo_mac" target="_blank">Atlassian Sourcetree</a>
      is a free Git and Mercurial client for Mac.
    
  </p>
</div>
  
</div>

      </script>
    
      <script id="branch-dialog-template" type="text/html">
        

<div class="tabbed-filter-widget branch-dialog">
  <div class="tabbed-filter">
    <input placeholder="Filter branches" class="filter-box" autosave="branch-dropdown-18022907" type="text">
    [[^ignoreTags]]
      <div class="aui-tabs horizontal-tabs aui-tabs-disabled filter-tabs">
        <ul class="tabs-menu">
          <li class="menu-item active-tab"><a href="#branches">Branches</a></li>
          <li class="menu-item"><a href="#tags">Tags</a></li>
        </ul>
      </div>
    [[/ignoreTags]]
  </div>
  
    <div class="tab-pane active-pane" id="branches" data-filter-placeholder="Filter branches">
      <ol class="filter-list">
        <li class="empty-msg">No matching branches</li>
        [[#branches]]
          
            [[#hasMultipleHeads]]
              [[#heads]]
                <li class="comprev filter-item">
                  <a class="pjax-trigger filter-item-link" href="/sonnayasomnambula/googlemockfordummiesrussian/src/[[changeset]]/README.md?at=[[safeName]]"
                     title="[[name]]">
                    [[name]] ([[shortChangeset]])
                  </a>
                </li>
              [[/heads]]
            [[/hasMultipleHeads]]
            [[^hasMultipleHeads]]
              <li class="comprev filter-item">
                <a class="pjax-trigger filter-item-link" href="/sonnayasomnambula/googlemockfordummiesrussian/src/[[changeset]]/README.md?at=[[safeName]]" title="[[name]]">
                  [[name]]
                </a>
              </li>
            [[/hasMultipleHeads]]
          
        [[/branches]]
      </ol>
    </div>
    <div class="tab-pane" id="tags" data-filter-placeholder="Filter tags">
      <ol class="filter-list">
        <li class="empty-msg">No matching tags</li>
        [[#tags]]
          <li class="comprev filter-item">
            <a class="pjax-trigger filter-item-link" href="/sonnayasomnambula/googlemockfordummiesrussian/src/[[changeset]]/README.md?at=[[safeName]]" title="[[name]]">
              [[name]]
            </a>
          </li>
        [[/tags]]
      </ol>
    </div>
  
</div>

      </script>
    
      <script id="mention-result" type="text/html">
        
<span class="mention-result">
  <span class="aui-avatar aui-avatar-small mention-result--avatar">
    <span class="aui-avatar-inner">
      <img src="[[avatar_url]]">
    </span>
  </span>
  [[#display_name]]
    <span class="display-name mention-result--display-name">[[&display_name]]</span> <small class="username mention-result--username">[[&username]]</small>
  [[/display_name]]
  [[^display_name]]
    <span class="username mention-result--username">[[&username]]</span>
  [[/display_name]]
  [[#is_teammate]][[^is_team]]
    <span class="aui-lozenge aui-lozenge-complete aui-lozenge-subtle mention-result--lozenge">teammate</span>
  [[/is_team]][[/is_teammate]]
</span>
      </script>
    
      <script id="mention-call-to-action" type="text/html">
        
[[^query]]
<li class="bb-typeahead-item">Begin typing to search for a user</li>
[[/query]]
[[#query]]
<li class="bb-typeahead-item">Continue typing to search for a user</li>
[[/query]]

      </script>
    
      <script id="mention-no-results" type="text/html">
        
[[^searching]]
<li class="bb-typeahead-item">Found no matching users for <em>[[query]]</em>.</li>
[[/searching]]
[[#searching]]
<li class="bb-typeahead-item bb-typeahead-searching">Searching for <em>[[query]]</em>.</li>
[[/searching]]

      </script>
    
      <script id="emoji-result" type="text/html">
        
<span class="emoji-result">
  <span class="emoji-result--avatar">
    <img class="emoji" src="[[src]]">
  </span>
  <span class="name emoji-result--name">[[&name]]</span>
</span>

      </script>
    
      <script id="repo-typeahead-result" type="text/html">
        <span class="aui-avatar aui-avatar-project aui-avatar-xsmall">
  <span class="aui-avatar-inner">
    <img src="[[avatar]]">
  </span>
</span>
<span class="owner">[[&owner]]</span>/<span class="slug">[[&slug]]</span>

      </script>
    
      <script id="share-form-template" type="text/html">
        

<div class="error aui-message hidden">
  <span class="aui-icon icon-error"></span>
  <div class="message"></div>
</div>
<form class="aui">
  <table class="widget bb-list aui">
    <thead>
    <tr class="assistive">
      <th class="user">User</th>
      <th class="role">Role</th>
      <th class="actions">Actions</th>
    </tr>
    </thead>
    <tbody>
      <tr class="form">
        <td colspan="2">
          <input type="text" class="text bb-user-typeahead user-or-email"
                 placeholder="Username or email address"
                 autocomplete="off"
                 data-bb-typeahead-focus="false"
                 [[#disabled]]disabled[[/disabled]]>
        </td>
        <td class="actions">
          <button type="submit" class="aui-button aui-button-light" disabled>Add</button>
        </td>
      </tr>
    </tbody>
  </table>
</form>

      </script>
    
      <script id="share-detail-template" type="text/html">
        

[[#username]]
<td class="user
    [[#hasCustomGroups]]custom-groups[[/hasCustomGroups]]"
    [[#error]]data-error="[[error]]"[[/error]]>
  <div title="[[displayName]]">
    <a href="/[[username]]/" class="user">
      <span class="aui-avatar aui-avatar-xsmall">
        <span class="aui-avatar-inner">
          <img src="[[avatar]]">
        </span>
      </span>
      <span>[[displayName]]</span>
    </a>
  </div>
</td>
[[/username]]
[[^username]]
<td class="email
    [[#hasCustomGroups]]custom-groups[[/hasCustomGroups]]"
    [[#error]]data-error="[[error]]"[[/error]]>
  <div title="[[email]]">
    <span class="aui-icon aui-icon-small aui-iconfont-email"></span>
    [[email]]
  </div>
</td>
[[/username]]
<td class="role
    [[#hasCustomGroups]]custom-groups[[/hasCustomGroups]]">
  <div>
    [[#group]]
      [[#hasCustomGroups]]
        <select class="group [[#noGroupChoices]]hidden[[/noGroupChoices]]">
          [[#groups]]
            <option value="[[slug]]"
                [[#isSelected]]selected[[/isSelected]]>
              [[name]]
            </option>
          [[/groups]]
        </select>
      [[/hasCustomGroups]]
      [[^hasCustomGroups]]
      <label>
        <input type="checkbox" class="admin"
            [[#isAdmin]]checked[[/isAdmin]]>
        Administrator
      </label>
      [[/hasCustomGroups]]
    [[/group]]
    [[^group]]
      <ul>
        <li class="permission aui-lozenge aui-lozenge-complete
            [[^read]]aui-lozenge-subtle[[/read]]"
            data-permission="read">
          read
        </li>
        <li class="permission aui-lozenge aui-lozenge-complete
            [[^write]]aui-lozenge-subtle[[/write]]"
            data-permission="write">
          write
        </li>
        <li class="permission aui-lozenge aui-lozenge-complete
            [[^admin]]aui-lozenge-subtle[[/admin]]"
            data-permission="admin">
          admin
        </li>
      </ul>
    [[/group]]
  </div>
</td>
<td class="actions
    [[#hasCustomGroups]]custom-groups[[/hasCustomGroups]]">
  <div>
    <a href="#" class="delete">
      <span class="aui-icon aui-icon-small aui-iconfont-remove">Delete</span>
    </a>
  </div>
</td>

      </script>
    
      <script id="share-team-template" type="text/html">
        

<div class="clearfix">
  <span class="team-avatar-container">
    <span class="aui-avatar aui-avatar-medium">
      <span class="aui-avatar-inner">
        <img src="[[avatar]]">
      </span>
    </span>
  </span>
  <span class="team-name-container">
    [[display_name]]
  </span>
</div>
<p class="helptext">
  
    Existing users are granted access to this team immediately.
    New users will be sent an invitation.
  
</p>
<div class="share-form"></div>

      </script>
    
      <script id="scope-list-template" type="text/html">
        <ul class="scope-list">
  [[#scopes]]
    <li class="scope-list--item">
      <span class="scope-list--icon aui-icon aui-icon-small [[icon]]"></span>
      <span class="scope-list--description">[[description]]</span>
    </li>
  [[/scopes]]
</ul>

      </script>
    
      <script id="source-changeset" type="text/html">
        

<a href="/sonnayasomnambula/googlemockfordummiesrussian/src/[[raw_node]]/[[path]]?at=default"
    class="[[#selected]]highlight[[/selected]]"
    data-hash="[[node]]">
  [[#author.username]]
    <span class="aui-avatar aui-avatar-xsmall">
      <span class="aui-avatar-inner">
        <img src="[[author.avatar]]">
      </span>
    </span>
    <span class="author" title="[[raw_author]]">[[author.display_name]]</span>
  [[/author.username]]
  [[^author.username]]
    <span class="aui-avatar aui-avatar-xsmall">
      <span class="aui-avatar-inner">
        <img src="https://d301sr5gafysq2.cloudfront.net/d1f637a9968a/img/default_avatar/user_blue.svg">
      </span>
    </span>
    <span class="author unmapped" title="[[raw_author]]">[[author]]</span>
  [[/author.username]]
  <time datetime="[[utctimestamp]]" data-title="true">[[utctimestamp]]</time>
  <span class="message">[[message]]</span>
</a>

      </script>
    
      <script id="embed-template" type="text/html">
        

<form class="aui inline-dialog-embed-dialog">
  <label for="embed-code-[[dialogId]]">Embed this source in another page:</label>
  <input type="text" readonly="true" value="&lt;script src=&quot;[[url]]&quot;&gt;&lt;/script&gt;" id="embed-code-[[dialogId]]" class="embed-code">
</form>

      </script>
    
  </div>




  
  


<script nonce="">
  window.__initial_state__ = {"section": {"repository": {"connectActions": [], "cloneProtocol": "https", "currentRepository": {"scm": "hg", "website": "", "name": "GoogleMockForDummiesRussian", "language": "markdown", "description": "", "links": {"clone": [{"href": "https://bitbucket.org/sonnayasomnambula/googlemockfordummiesrussian", "name": "https"}, {"href": "ssh://hg@bitbucket.org/sonnayasomnambula/googlemockfordummiesrussian", "name": "ssh"}], "self": {"href": "https://bitbucket.org/!api/2.0/repositories/sonnayasomnambula/googlemockfordummiesrussian"}, "html": {"href": "https://bitbucket.org/sonnayasomnambula/googlemockfordummiesrussian"}, "avatar": {"href": "https://bytebucket.org/ravatar/%7Bf2f132aa-2c5d-4679-9475-187980b93953%7D?ts=markdown"}}, "mainbranch": {"name": "default"}, "full_name": "sonnayasomnambula/googlemockfordummiesrussian", "owner": {"username": "sonnayasomnambula", "website": "", "display_name": "Serge Glazomitsky", "account_id": "557058:ff1042ff-d3f0-4c75-973b-dd42e546fe53", "links": {"self": {"href": "https://bitbucket.org/!api/2.0/users/sonnayasomnambula"}, "html": {"href": "https://bitbucket.org/sonnayasomnambula/"}, "avatar": {"href": "https://bitbucket.org/account/sonnayasomnambula/avatar/32/"}}, "created_on": "2014-10-10T16:45:31.470162+00:00", "is_staff": false, "location": null, "type": "user", "uuid": "{a333feef-d86c-4d07-b6c3-add583321656}"}, "type": "repository", "slug": "googlemockfordummiesrussian", "is_private": false, "uuid": "{f2f132aa-2c5d-4679-9475-187980b93953}"}, "menuItems": [{"analytics_label": "repository.overview", "is_client_link": false, "icon_class": "icon-overview", "badge_label": null, "weight": 100, "url": "/sonnayasomnambula/googlemockfordummiesrussian/overview", "tab_name": "overview", "can_display": true, "label": "Overview", "type": "menu_item", "anchor": true, "analytics_payload": {}, "matching_url_prefixes": [], "target": "_self", "id": "repo-overview-link", "icon": "icon-overview"}, {"analytics_label": "repository.source", "is_client_link": false, "icon_class": "icon-source", "badge_label": null, "weight": 200, "url": "/sonnayasomnambula/googlemockfordummiesrussian/src", "tab_name": "source", "can_display": true, "label": "Source", "type": "menu_item", "anchor": true, "analytics_payload": {}, "matching_url_prefixes": ["/diff", "/history-node"], "target": "_self", "id": "repo-source-link", "icon": "icon-source"}, {"analytics_label": "repository.commits", "is_client_link": false, "icon_class": "icon-commits", "badge_label": null, "weight": 300, "url": "/sonnayasomnambula/googlemockfordummiesrussian/commits/", "tab_name": "commits", "can_display": true, "label": "Commits", "type": "menu_item", "anchor": true, "analytics_payload": {}, "matching_url_prefixes": [], "target": "_self", "id": "repo-commits-link", "icon": "icon-commits"}, {"analytics_label": "repository.branches", "is_client_link": false, "icon_class": "icon-branches", "badge_label": null, "weight": 400, "url": "/sonnayasomnambula/googlemockfordummiesrussian/branches/", "tab_name": "branches", "can_display": true, "label": "Branches", "type": "menu_item", "anchor": true, "analytics_payload": {}, "matching_url_prefixes": [], "target": "_self", "id": "repo-branches-link", "icon": "icon-branches"}, {"analytics_label": "repository.pullrequests", "is_client_link": false, "icon_class": "icon-pull-requests", "badge_label": null, "weight": 500, "url": "/sonnayasomnambula/googlemockfordummiesrussian/pull-requests/", "tab_name": "pullrequests", "can_display": true, "label": "Pull requests", "type": "menu_item", "anchor": true, "analytics_payload": {}, "matching_url_prefixes": [], "target": "_self", "id": "repo-pullrequests-link", "icon": "icon-pull-requests"}, {"analytics_label": "user.addon", "is_client_link": false, "icon_class": "aui-iconfont-build", "badge_label": null, "weight": 550, "url": "/sonnayasomnambula/googlemockfordummiesrussian/addon/pipelines/home", "tab_name": "repopage-j7qe94-add-on-link", "can_display": true, "label": "Pipelines", "icon_url": null, "anchor": true, "analytics_payload": {}, "matching_url_prefixes": [], "type": "connect_menu_item", "id": "repopage-j7qe94-add-on-link", "target": "_self"}, {"analytics_label": "repository.downloads", "is_client_link": false, "icon_class": "icon-downloads", "badge_label": null, "weight": 800, "url": "/sonnayasomnambula/googlemockfordummiesrussian/downloads/", "tab_name": "downloads", "can_display": true, "label": "Downloads", "type": "menu_item", "anchor": true, "analytics_payload": {}, "matching_url_prefixes": [], "target": "_self", "id": "repo-downloads-link", "icon": "icon-downloads"}], "bitbucketActions": [{"analytics_label": "repository.clone", "is_client_link": false, "icon_class": "icon-clone", "badge_label": null, "weight": 100, "url": "#clone", "tab_name": "clone", "can_display": true, "label": "<strong>Clone<\/strong> this repository", "type": "menu_item", "anchor": true, "analytics_payload": {}, "matching_url_prefixes": [], "target": "_self", "id": "repo-clone-button", "icon": "icon-clone"}, {"analytics_label": "repository.compare", "is_client_link": false, "icon_class": "aui-icon-small aui-iconfont-devtools-compare", "badge_label": null, "weight": 400, "url": "/sonnayasomnambula/googlemockfordummiesrussian/branches/compare", "tab_name": "compare", "can_display": true, "label": "<strong>Compare<\/strong> branches or tags", "type": "menu_item", "anchor": true, "analytics_payload": {}, "matching_url_prefixes": [], "target": "_self", "id": "repo-compare-link", "icon": "aui-icon-small aui-iconfont-devtools-compare"}, {"analytics_label": "repository.fork", "is_client_link": false, "icon_class": "icon-fork", "badge_label": null, "weight": 500, "url": "/sonnayasomnambula/googlemockfordummiesrussian/fork", "tab_name": "fork", "can_display": true, "label": "<strong>Fork<\/strong> this repository", "type": "menu_item", "anchor": true, "analytics_payload": {}, "matching_url_prefixes": [], "target": "_self", "id": "repo-fork-link", "icon": "icon-fork"}], "activeMenuItem": "source"}}, "global": {"needs_marketing_consent": false, "features": {"source-browser-file-filter": true, "cache-ref-adverts": true, "exp-share-to-invite-variation": false, "clone-in-xcode": true, "gdpr-marketing-consent": true, "connect-v5": true, "search-syntax-highlighting": true, "mobile-nav": true, "deployments": true, "fe_word_diff": true, "trello-boards": true, "use-moneybucket": true, "default-merge-strategy": true, "app-passwords": true, "nav-add-file": false, "src-lastmod-for-dirs": true, "lfs_post_beta": true, "analytics_push_introspection": true, "allow-pullrequest-live-reviewers": true, "bitbucket-chats-integration": true}, "locale": "en", "geoip_country": null, "targetFeatures": {"new-code-review-experiment": false, "show-guidance-message": true, "search-satisfaction": true, "bitbucket-chats-integration": true, "source-browser-file-filter": true, "cache-ref-adverts": true, "mobile-nav": true, "deployments": true, "fe_word_diff": true, "clonebundles": true, "use-moneybucket": true, "pride-logo": false, "default-merge-strategy": true, "analytics_push_introspection": true, "diff-api-renames": false, "clone-in-xcode": true, "gdpr-marketing-consent": true, "connect-v5": true, "trello-boards": true, "atlassian-editor": true, "src-lastmod-for-dirs": true, "new-source-browser": true, "exp-new-user-survey": true, "evolution": false, "search-syntax-highlighting": true, "app-passwords": true, "lfs_post_beta": true, "allow-pullrequest-live-reviewers": true}, "isFocusedTask": false, "targetUser": {"username": "sonnayasomnambula", "website": "", "display_name": "Serge Glazomitsky", "account_id": "557058:ff1042ff-d3f0-4c75-973b-dd42e546fe53", "links": {"self": {"href": "https://bitbucket.org/!api/2.0/users/sonnayasomnambula"}, "html": {"href": "https://bitbucket.org/sonnayasomnambula/"}, "avatar": {"href": "https://bitbucket.org/account/sonnayasomnambula/avatar/32/"}}, "created_on": "2014-10-10T16:45:31.470162+00:00", "is_staff": false, "location": null, "type": "user", "uuid": "{a333feef-d86c-4d07-b6c3-add583321656}"}, "flags": [], "isNavigationOpen": true, "path": "/sonnayasomnambula/googlemockfordummiesrussian/src/4a33d5b66d6f2b5d4965f09ca2b1a0650ad7a488/README.md", "focusedTaskBackButtonUrl": "https://bitbucket.org/sonnayasomnambula/googlemockfordummiesrussian/src"}};
  window.__settings__ = {"MARKETPLACE_TERMS_OF_USE_URL": null, "JIRA_ISSUE_COLLECTORS": {"source-browser": {"url": "https://bitbucketfeedback.atlassian.net/s/d41d8cd98f00b204e9800998ecf8427e-T/-tqnsjm/b/20/a44af77267a987a660377e5c46e0fb64/_/download/batch/com.atlassian.jira.collector.plugin.jira-issue-collector-plugin:issuecollector/com.atlassian.jira.collector.plugin.jira-issue-collector-plugin:issuecollector.js?locale=en-US&collectorId=c19c2ff6", "id": "c19c2ff6"}, "code-review": {"url": "https://bitbucketfeedback.atlassian.net/s/d41d8cd98f00b204e9800998ecf8427e-T/-4bqv2z/b/20/a44af77267a987a660377e5c46e0fb64/_/download/batch/com.atlassian.jira.collector.plugin.jira-issue-collector-plugin:issuecollector/com.atlassian.jira.collector.plugin.jira-issue-collector-plugin:issuecollector.js?locale=en-US&collectorId=bb066400", "id": "bb066400"}}, "CANON_URL": "https://bitbucket.org", "CONSENT_HUB_FRONTEND_BASE_URL": "https://preferences.atlassian.com", "API_CANON_URL": "https://api.bitbucket.org", "SOCIAL_AUTH_ATLASSIANID_LOGOUT_URL": "https://id.atlassian.com/logout"};
  window.__webpack_nonce__ = '';
</script>

<script src="https://d301sr5gafysq2.cloudfront.net/d1f637a9968a/jsi18n/en/djangojs.js" nonce=""></script>

  <script src="https://d301sr5gafysq2.cloudfront.net/d1f637a9968a/dist/webpack/locales/en.js" nonce=""></script>

<script src="https://d301sr5gafysq2.cloudfront.net/d1f637a9968a/dist/webpack/vendor.js" nonce=""></script>
<script src="https://d301sr5gafysq2.cloudfront.net/d1f637a9968a/dist/webpack/app.js" nonce=""></script>


<script async src="https://www.google-analytics.com/analytics.js" nonce=""></script>

<script nonce="" type="text/javascript">window.NREUM||(NREUM={});NREUM.info={"beacon":"bam.nr-data.net","queueTime":0,"licenseKey":"a2cef8c3d3","agent":"","transactionName":"Z11RZxdWW0cEVkYLDV4XdUYLVEFdClsdAAtEWkZQDlJBGgRFQhFMQl1DXFcZQ10AQkFYBFlUVlEXWEJHAA==","applicationID":"1841284","errorBeacon":"bam.nr-data.net","applicationTime":380}</script>
</body>
</html>