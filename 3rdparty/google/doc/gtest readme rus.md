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
  sonnayasomnambula / GoogleTestPrimerRussian 
  / source  / README.md
 &mdash; Bitbucket
</title>
  <script nonce="" type="text/javascript">(window.NREUM||(NREUM={})).loader_config={xpid:"VwMGVVZSGwIIUFBQDwU="};window.NREUM||(NREUM={}),__nr_require=function(t,e,n){function r(n){if(!e[n]){var o=e[n]={exports:{}};t[n][0].call(o.exports,function(e){var o=t[n][1][e];return r(o||e)},o,o.exports)}return e[n].exports}if("function"==typeof __nr_require)return __nr_require;for(var o=0;o<n.length;o++)r(n[o]);return r}({1:[function(t,e,n){function r(t){try{c.console&&console.log(t)}catch(e){}}var o,i=t("ee"),a=t(20),c={};try{o=localStorage.getItem("__nr_flags").split(","),console&&"function"==typeof console.log&&(c.console=!0,o.indexOf("dev")!==-1&&(c.dev=!0),o.indexOf("nr_dev")!==-1&&(c.nrDev=!0))}catch(s){}c.nrDev&&i.on("internal-error",function(t){r(t.stack)}),c.dev&&i.on("fn-err",function(t,e,n){r(n.stack)}),c.dev&&(r("NR AGENT IN DEVELOPMENT MODE"),r("flags: "+a(c,function(t,e){return t}).join(", ")))},{}],2:[function(t,e,n){function r(t,e,n,r,c){try{h?h-=1:o(c||new UncaughtException(t,e,n),!0)}catch(f){try{i("ierr",[f,s.now(),!0])}catch(d){}}return"function"==typeof u&&u.apply(this,a(arguments))}function UncaughtException(t,e,n){this.message=t||"Uncaught error with no additional information",this.sourceURL=e,this.line=n}function o(t,e){var n=e?null:s.now();i("err",[t,n])}var i=t("handle"),a=t(21),c=t("ee"),s=t("loader"),f=t("gos"),u=window.onerror,d=!1,p="nr@seenError",h=0;s.features.err=!0,t(1),window.onerror=r;try{throw new Error}catch(l){"stack"in l&&(t(13),t(12),"addEventListener"in window&&t(6),s.xhrWrappable&&t(14),d=!0)}c.on("fn-start",function(t,e,n){d&&(h+=1)}),c.on("fn-err",function(t,e,n){d&&!n[p]&&(f(n,p,function(){return!0}),this.thrown=!0,o(n))}),c.on("fn-end",function(){d&&!this.thrown&&h>0&&(h-=1)}),c.on("internal-error",function(t){i("ierr",[t,s.now(),!0])})},{}],3:[function(t,e,n){t("loader").features.ins=!0},{}],4:[function(t,e,n){function r(){M++,S=y.hash,this[u]=b.now()}function o(){M--,y.hash!==S&&i(0,!0);var t=b.now();this[l]=~~this[l]+t-this[u],this[d]=t}function i(t,e){E.emit("newURL",[""+y,e])}function a(t,e){t.on(e,function(){this[e]=b.now()})}var c="-start",s="-end",f="-body",u="fn"+c,d="fn"+s,p="cb"+c,h="cb"+s,l="jsTime",m="fetch",v="addEventListener",w=window,y=w.location,b=t("loader");if(w[v]&&b.xhrWrappable){var g=t(10),x=t(11),E=t(8),P=t(6),O=t(13),R=t(7),T=t(14),L=t(9),j=t("ee"),N=j.get("tracer");t(15),b.features.spa=!0;var S,M=0;j.on(u,r),j.on(p,r),j.on(d,o),j.on(h,o),j.buffer([u,d,"xhr-done","xhr-resolved"]),P.buffer([u]),O.buffer(["setTimeout"+s,"clearTimeout"+c,u]),T.buffer([u,"new-xhr","send-xhr"+c]),R.buffer([m+c,m+"-done",m+f+c,m+f+s]),E.buffer(["newURL"]),g.buffer([u]),x.buffer(["propagate",p,h,"executor-err","resolve"+c]),N.buffer([u,"no-"+u]),L.buffer(["new-jsonp","cb-start","jsonp-error","jsonp-end"]),a(T,"send-xhr"+c),a(j,"xhr-resolved"),a(j,"xhr-done"),a(R,m+c),a(R,m+"-done"),a(L,"new-jsonp"),a(L,"jsonp-end"),a(L,"cb-start"),E.on("pushState-end",i),E.on("replaceState-end",i),w[v]("hashchange",i,!0),w[v]("load",i,!0),w[v]("popstate",function(){i(0,M>1)},!0)}},{}],5:[function(t,e,n){function r(t){}if(window.performance&&window.performance.timing&&window.performance.getEntriesByType){var o=t("ee"),i=t("handle"),a=t(13),c=t(12),s="learResourceTimings",f="addEventListener",u="resourcetimingbufferfull",d="bstResource",p="resource",h="-start",l="-end",m="fn"+h,v="fn"+l,w="bstTimer",y="pushState",b=t("loader");b.features.stn=!0,t(8);var g=NREUM.o.EV;o.on(m,function(t,e){var n=t[0];n instanceof g&&(this.bstStart=b.now())}),o.on(v,function(t,e){var n=t[0];n instanceof g&&i("bst",[n,e,this.bstStart,b.now()])}),a.on(m,function(t,e,n){this.bstStart=b.now(),this.bstType=n}),a.on(v,function(t,e){i(w,[e,this.bstStart,b.now(),this.bstType])}),c.on(m,function(){this.bstStart=b.now()}),c.on(v,function(t,e){i(w,[e,this.bstStart,b.now(),"requestAnimationFrame"])}),o.on(y+h,function(t){this.time=b.now(),this.startPath=location.pathname+location.hash}),o.on(y+l,function(t){i("bstHist",[location.pathname+location.hash,this.startPath,this.time])}),f in window.performance&&(window.performance["c"+s]?window.performance[f](u,function(t){i(d,[window.performance.getEntriesByType(p)]),window.performance["c"+s]()},!1):window.performance[f]("webkit"+u,function(t){i(d,[window.performance.getEntriesByType(p)]),window.performance["webkitC"+s]()},!1)),document[f]("scroll",r,{passive:!0}),document[f]("keypress",r,!1),document[f]("click",r,!1)}},{}],6:[function(t,e,n){function r(t){for(var e=t;e&&!e.hasOwnProperty(u);)e=Object.getPrototypeOf(e);e&&o(e)}function o(t){c.inPlace(t,[u,d],"-",i)}function i(t,e){return t[1]}var a=t("ee").get("events"),c=t(23)(a,!0),s=t("gos"),f=XMLHttpRequest,u="addEventListener",d="removeEventListener";e.exports=a,"getPrototypeOf"in Object?(r(document),r(window),r(f.prototype)):f.prototype.hasOwnProperty(u)&&(o(window),o(f.prototype)),a.on(u+"-start",function(t,e){var n=t[1],r=s(n,"nr@wrapped",function(){function t(){if("function"==typeof n.handleEvent)return n.handleEvent.apply(n,arguments)}var e={object:t,"function":n}[typeof n];return e?c(e,"fn-",null,e.name||"anonymous"):n});this.wrapped=t[1]=r}),a.on(d+"-start",function(t){t[1]=this.wrapped||t[1]})},{}],7:[function(t,e,n){function r(t,e,n){var r=t[e];"function"==typeof r&&(t[e]=function(){var t=r.apply(this,arguments);return o.emit(n+"start",arguments,t),t.then(function(e){return o.emit(n+"end",[null,e],t),e},function(e){throw o.emit(n+"end",[e],t),e})})}var o=t("ee").get("fetch"),i=t(20);e.exports=o;var a=window,c="fetch-",s=c+"body-",f=["arrayBuffer","blob","json","text","formData"],u=a.Request,d=a.Response,p=a.fetch,h="prototype";u&&d&&p&&(i(f,function(t,e){r(u[h],e,s),r(d[h],e,s)}),r(a,"fetch",c),o.on(c+"end",function(t,e){var n=this;e?e.clone().arrayBuffer().then(function(t){n.rxSize=t.byteLength,o.emit(c+"done",[null,e],n)}):o.emit(c+"done",[t],n)}))},{}],8:[function(t,e,n){var r=t("ee").get("history"),o=t(23)(r);e.exports=r,o.inPlace(window.history,["pushState","replaceState"],"-")},{}],9:[function(t,e,n){function r(t){function e(){s.emit("jsonp-end",[],p),t.removeEventListener("load",e,!1),t.removeEventListener("error",n,!1)}function n(){s.emit("jsonp-error",[],p),s.emit("jsonp-end",[],p),t.removeEventListener("load",e,!1),t.removeEventListener("error",n,!1)}var r=t&&"string"==typeof t.nodeName&&"script"===t.nodeName.toLowerCase();if(r){var o="function"==typeof t.addEventListener;if(o){var a=i(t.src);if(a){var u=c(a),d="function"==typeof u.parent[u.key];if(d){var p={};f.inPlace(u.parent,[u.key],"cb-",p),t.addEventListener("load",e,!1),t.addEventListener("error",n,!1),s.emit("new-jsonp",[t.src],p)}}}}}function o(){return"addEventListener"in window}function i(t){var e=t.match(u);return e?e[1]:null}function a(t,e){var n=t.match(p),r=n[1],o=n[3];return o?a(o,e[r]):e[r]}function c(t){var e=t.match(d);return e&&e.length>=3?{key:e[2],parent:a(e[1],window)}:{key:t,parent:window}}var s=t("ee").get("jsonp"),f=t(23)(s);if(e.exports=s,o()){var u=/[?&](?:callback|cb)=([^&#]+)/,d=/(.*)\.([^.]+)/,p=/^(\w+)(\.|$)(.*)$/,h=["appendChild","insertBefore","replaceChild"];f.inPlace(HTMLElement.prototype,h,"dom-"),f.inPlace(HTMLHeadElement.prototype,h,"dom-"),f.inPlace(HTMLBodyElement.prototype,h,"dom-"),s.on("dom-start",function(t){r(t[0])})}},{}],10:[function(t,e,n){var r=t("ee").get("mutation"),o=t(23)(r),i=NREUM.o.MO;e.exports=r,i&&(window.MutationObserver=function(t){return this instanceof i?new i(o(t,"fn-")):i.apply(this,arguments)},MutationObserver.prototype=i.prototype)},{}],11:[function(t,e,n){function r(t){var e=a.context(),n=c(t,"executor-",e),r=new f(n);return a.context(r).getCtx=function(){return e},a.emit("new-promise",[r,e],e),r}function o(t,e){return e}var i=t(23),a=t("ee").get("promise"),c=i(a),s=t(20),f=NREUM.o.PR;e.exports=a,f&&(window.Promise=r,["all","race"].forEach(function(t){var e=f[t];f[t]=function(n){function r(t){return function(){a.emit("propagate",[null,!o],i),o=o||!t}}var o=!1;s(n,function(e,n){Promise.resolve(n).then(r("all"===t),r(!1))});var i=e.apply(f,arguments),c=f.resolve(i);return c}}),["resolve","reject"].forEach(function(t){var e=f[t];f[t]=function(t){var n=e.apply(f,arguments);return t!==n&&a.emit("propagate",[t,!0],n),n}}),f.prototype["catch"]=function(t){return this.then(null,t)},f.prototype=Object.create(f.prototype,{constructor:{value:r}}),s(Object.getOwnPropertyNames(f),function(t,e){try{r[e]=f[e]}catch(n){}}),a.on("executor-start",function(t){t[0]=c(t[0],"resolve-",this),t[1]=c(t[1],"resolve-",this)}),a.on("executor-err",function(t,e,n){t[1](n)}),c.inPlace(f.prototype,["then"],"then-",o),a.on("then-start",function(t,e){this.promise=e,t[0]=c(t[0],"cb-",this),t[1]=c(t[1],"cb-",this)}),a.on("then-end",function(t,e,n){this.nextPromise=n;var r=this.promise;a.emit("propagate",[r,!0],n)}),a.on("cb-end",function(t,e,n){a.emit("propagate",[n,!0],this.nextPromise)}),a.on("propagate",function(t,e,n){this.getCtx&&!e||(this.getCtx=function(){if(t instanceof Promise)var e=a.context(t);return e&&e.getCtx?e.getCtx():this})}),r.toString=function(){return""+f})},{}],12:[function(t,e,n){var r=t("ee").get("raf"),o=t(23)(r),i="equestAnimationFrame";e.exports=r,o.inPlace(window,["r"+i,"mozR"+i,"webkitR"+i,"msR"+i],"raf-"),r.on("raf-start",function(t){t[0]=o(t[0],"fn-")})},{}],13:[function(t,e,n){function r(t,e,n){t[0]=a(t[0],"fn-",null,n)}function o(t,e,n){this.method=n,this.timerDuration=isNaN(t[1])?0:+t[1],t[0]=a(t[0],"fn-",this,n)}var i=t("ee").get("timer"),a=t(23)(i),c="setTimeout",s="setInterval",f="clearTimeout",u="-start",d="-";e.exports=i,a.inPlace(window,[c,"setImmediate"],c+d),a.inPlace(window,[s],s+d),a.inPlace(window,[f,"clearImmediate"],f+d),i.on(s+u,r),i.on(c+u,o)},{}],14:[function(t,e,n){function r(t,e){d.inPlace(e,["onreadystatechange"],"fn-",c)}function o(){var t=this,e=u.context(t);t.readyState>3&&!e.resolved&&(e.resolved=!0,u.emit("xhr-resolved",[],t)),d.inPlace(t,y,"fn-",c)}function i(t){b.push(t),l&&(x?x.then(a):v?v(a):(E=-E,P.data=E))}function a(){for(var t=0;t<b.length;t++)r([],b[t]);b.length&&(b=[])}function c(t,e){return e}function s(t,e){for(var n in t)e[n]=t[n];return e}t(6);var f=t("ee"),u=f.get("xhr"),d=t(23)(u),p=NREUM.o,h=p.XHR,l=p.MO,m=p.PR,v=p.SI,w="readystatechange",y=["onload","onerror","onabort","onloadstart","onloadend","onprogress","ontimeout"],b=[];e.exports=u;var g=window.XMLHttpRequest=function(t){var e=new h(t);try{u.emit("new-xhr",[e],e),e.addEventListener(w,o,!1)}catch(n){try{u.emit("internal-error",[n])}catch(r){}}return e};if(s(h,g),g.prototype=h.prototype,d.inPlace(g.prototype,["open","send"],"-xhr-",c),u.on("send-xhr-start",function(t,e){r(t,e),i(e)}),u.on("open-xhr-start",r),l){var x=m&&m.resolve();if(!v&&!m){var E=1,P=document.createTextNode(E);new l(a).observe(P,{characterData:!0})}}else f.on("fn-end",function(t){t[0]&&t[0].type===w||a()})},{}],15:[function(t,e,n){function r(t){var e=this.params,n=this.metrics;if(!this.ended){this.ended=!0;for(var r=0;r<d;r++)t.removeEventListener(u[r],this.listener,!1);if(!e.aborted){if(n.duration=a.now()-this.startTime,4===t.readyState){e.status=t.status;var i=o(t,this.lastSize);if(i&&(n.rxSize=i),this.sameOrigin){var s=t.getResponseHeader("X-NewRelic-App-Data");s&&(e.cat=s.split(", ").pop())}}else e.status=0;n.cbTime=this.cbTime,f.emit("xhr-done",[t],t),c("xhr",[e,n,this.startTime])}}}function o(t,e){var n=t.responseType;if("json"===n&&null!==e)return e;var r="arraybuffer"===n||"blob"===n||"json"===n?t.response:t.responseText;return l(r)}function i(t,e){var n=s(e),r=t.params;r.host=n.hostname+":"+n.port,r.pathname=n.pathname,t.sameOrigin=n.sameOrigin}var a=t("loader");if(a.xhrWrappable){var c=t("handle"),s=t(16),f=t("ee"),u=["load","error","abort","timeout"],d=u.length,p=t("id"),h=t(19),l=t(18),m=window.XMLHttpRequest;a.features.xhr=!0,t(14),f.on("new-xhr",function(t){var e=this;e.totalCbs=0,e.called=0,e.cbTime=0,e.end=r,e.ended=!1,e.xhrGuids={},e.lastSize=null,h&&(h>34||h<10)||window.opera||t.addEventListener("progress",function(t){e.lastSize=t.loaded},!1)}),f.on("open-xhr-start",function(t){this.params={method:t[0]},i(this,t[1]),this.metrics={}}),f.on("open-xhr-end",function(t,e){"loader_config"in NREUM&&"xpid"in NREUM.loader_config&&this.sameOrigin&&e.setRequestHeader("X-NewRelic-ID",NREUM.loader_config.xpid)}),f.on("send-xhr-start",function(t,e){var n=this.metrics,r=t[0],o=this;if(n&&r){var i=l(r);i&&(n.txSize=i)}this.startTime=a.now(),this.listener=function(t){try{"abort"===t.type&&(o.params.aborted=!0),("load"!==t.type||o.called===o.totalCbs&&(o.onloadCalled||"function"!=typeof e.onload))&&o.end(e)}catch(n){try{f.emit("internal-error",[n])}catch(r){}}};for(var c=0;c<d;c++)e.addEventListener(u[c],this.listener,!1)}),f.on("xhr-cb-time",function(t,e,n){this.cbTime+=t,e?this.onloadCalled=!0:this.called+=1,this.called!==this.totalCbs||!this.onloadCalled&&"function"==typeof n.onload||this.end(n)}),f.on("xhr-load-added",function(t,e){var n=""+p(t)+!!e;this.xhrGuids&&!this.xhrGuids[n]&&(this.xhrGuids[n]=!0,this.totalCbs+=1)}),f.on("xhr-load-removed",function(t,e){var n=""+p(t)+!!e;this.xhrGuids&&this.xhrGuids[n]&&(delete this.xhrGuids[n],this.totalCbs-=1)}),f.on("addEventListener-end",function(t,e){e instanceof m&&"load"===t[0]&&f.emit("xhr-load-added",[t[1],t[2]],e)}),f.on("removeEventListener-end",function(t,e){e instanceof m&&"load"===t[0]&&f.emit("xhr-load-removed",[t[1],t[2]],e)}),f.on("fn-start",function(t,e,n){e instanceof m&&("onload"===n&&(this.onload=!0),("load"===(t[0]&&t[0].type)||this.onload)&&(this.xhrCbStart=a.now()))}),f.on("fn-end",function(t,e){this.xhrCbStart&&f.emit("xhr-cb-time",[a.now()-this.xhrCbStart,this.onload,e],e)})}},{}],16:[function(t,e,n){e.exports=function(t){var e=document.createElement("a"),n=window.location,r={};e.href=t,r.port=e.port;var o=e.href.split("://");!r.port&&o[1]&&(r.port=o[1].split("/")[0].split("@").pop().split(":")[1]),r.port&&"0"!==r.port||(r.port="https"===o[0]?"443":"80"),r.hostname=e.hostname||n.hostname,r.pathname=e.pathname,r.protocol=o[0],"/"!==r.pathname.charAt(0)&&(r.pathname="/"+r.pathname);var i=!e.protocol||":"===e.protocol||e.protocol===n.protocol,a=e.hostname===document.domain&&e.port===n.port;return r.sameOrigin=i&&(!e.hostname||a),r}},{}],17:[function(t,e,n){function r(){}function o(t,e,n){return function(){return i(t,[f.now()].concat(c(arguments)),e?null:this,n),e?void 0:this}}var i=t("handle"),a=t(20),c=t(21),s=t("ee").get("tracer"),f=t("loader"),u=NREUM;"undefined"==typeof window.newrelic&&(newrelic=u);var d=["setPageViewName","setCustomAttribute","setErrorHandler","finished","addToTrace","inlineHit","addRelease"],p="api-",h=p+"ixn-";a(d,function(t,e){u[e]=o(p+e,!0,"api")}),u.addPageAction=o(p+"addPageAction",!0),u.setCurrentRouteName=o(p+"routeName",!0),e.exports=newrelic,u.interaction=function(){return(new r).get()};var l=r.prototype={createTracer:function(t,e){var n={},r=this,o="function"==typeof e;return i(h+"tracer",[f.now(),t,n],r),function(){if(s.emit((o?"":"no-")+"fn-start",[f.now(),r,o],n),o)try{return e.apply(this,arguments)}catch(t){throw s.emit("fn-err",[arguments,this,t],n),t}finally{s.emit("fn-end",[f.now()],n)}}}};a("setName,setAttribute,save,ignore,onEnd,getContext,end,get".split(","),function(t,e){l[e]=o(h+e)}),newrelic.noticeError=function(t){"string"==typeof t&&(t=new Error(t)),i("err",[t,f.now()])}},{}],18:[function(t,e,n){e.exports=function(t){if("string"==typeof t&&t.length)return t.length;if("object"==typeof t){if("undefined"!=typeof ArrayBuffer&&t instanceof ArrayBuffer&&t.byteLength)return t.byteLength;if("undefined"!=typeof Blob&&t instanceof Blob&&t.size)return t.size;if(!("undefined"!=typeof FormData&&t instanceof FormData))try{return JSON.stringify(t).length}catch(e){return}}}},{}],19:[function(t,e,n){var r=0,o=navigator.userAgent.match(/Firefox[\/\s](\d+\.\d+)/);o&&(r=+o[1]),e.exports=r},{}],20:[function(t,e,n){function r(t,e){var n=[],r="",i=0;for(r in t)o.call(t,r)&&(n[i]=e(r,t[r]),i+=1);return n}var o=Object.prototype.hasOwnProperty;e.exports=r},{}],21:[function(t,e,n){function r(t,e,n){e||(e=0),"undefined"==typeof n&&(n=t?t.length:0);for(var r=-1,o=n-e||0,i=Array(o<0?0:o);++r<o;)i[r]=t[e+r];return i}e.exports=r},{}],22:[function(t,e,n){e.exports={exists:"undefined"!=typeof window.performance&&window.performance.timing&&"undefined"!=typeof window.performance.timing.navigationStart}},{}],23:[function(t,e,n){function r(t){return!(t&&t instanceof Function&&t.apply&&!t[a])}var o=t("ee"),i=t(21),a="nr@original",c=Object.prototype.hasOwnProperty,s=!1;e.exports=function(t,e){function n(t,e,n,o){function nrWrapper(){var r,a,c,s;try{a=this,r=i(arguments),c="function"==typeof n?n(r,a):n||{}}catch(f){p([f,"",[r,a,o],c])}u(e+"start",[r,a,o],c);try{return s=t.apply(a,r)}catch(d){throw u(e+"err",[r,a,d],c),d}finally{u(e+"end",[r,a,s],c)}}return r(t)?t:(e||(e=""),nrWrapper[a]=t,d(t,nrWrapper),nrWrapper)}function f(t,e,o,i){o||(o="");var a,c,s,f="-"===o.charAt(0);for(s=0;s<e.length;s++)c=e[s],a=t[c],r(a)||(t[c]=n(a,f?c+o:o,i,c))}function u(n,r,o){if(!s||e){var i=s;s=!0;try{t.emit(n,r,o,e)}catch(a){p([a,n,r,o])}s=i}}function d(t,e){if(Object.defineProperty&&Object.keys)try{var n=Object.keys(t);return n.forEach(function(n){Object.defineProperty(e,n,{get:function(){return t[n]},set:function(e){return t[n]=e,e}})}),e}catch(r){p([r])}for(var o in t)c.call(t,o)&&(e[o]=t[o]);return e}function p(e){try{t.emit("internal-error",e)}catch(n){}}return t||(t=o),n.inPlace=f,n.flag=a,n}},{}],ee:[function(t,e,n){function r(){}function o(t){function e(t){return t&&t instanceof r?t:t?s(t,c,i):i()}function n(n,r,o,i){if(!p.aborted||i){t&&t(n,r,o);for(var a=e(o),c=l(n),s=c.length,f=0;f<s;f++)c[f].apply(a,r);var d=u[y[n]];return d&&d.push([b,n,r,a]),a}}function h(t,e){w[t]=l(t).concat(e)}function l(t){return w[t]||[]}function m(t){return d[t]=d[t]||o(n)}function v(t,e){f(t,function(t,n){e=e||"feature",y[n]=e,e in u||(u[e]=[])})}var w={},y={},b={on:h,emit:n,get:m,listeners:l,context:e,buffer:v,abort:a,aborted:!1};return b}function i(){return new r}function a(){(u.api||u.feature)&&(p.aborted=!0,u=p.backlog={})}var c="nr@context",s=t("gos"),f=t(20),u={},d={},p=e.exports=o();p.backlog=u},{}],gos:[function(t,e,n){function r(t,e,n){if(o.call(t,e))return t[e];var r=n();if(Object.defineProperty&&Object.keys)try{return Object.defineProperty(t,e,{value:r,writable:!0,enumerable:!1}),r}catch(i){}return t[e]=r,r}var o=Object.prototype.hasOwnProperty;e.exports=r},{}],handle:[function(t,e,n){function r(t,e,n,r){o.buffer([t],r),o.emit(t,e,n)}var o=t("ee").get("handle");e.exports=r,r.ee=o},{}],id:[function(t,e,n){function r(t){var e=typeof t;return!t||"object"!==e&&"function"!==e?-1:t===window?0:a(t,i,function(){return o++})}var o=1,i="nr@id",a=t("gos");e.exports=r},{}],loader:[function(t,e,n){function r(){if(!x++){var t=g.info=NREUM.info,e=p.getElementsByTagName("script")[0];if(setTimeout(u.abort,3e4),!(t&&t.licenseKey&&t.applicationID&&e))return u.abort();f(y,function(e,n){t[e]||(t[e]=n)}),s("mark",["onload",a()+g.offset],null,"api");var n=p.createElement("script");n.src="https://"+t.agent,e.parentNode.insertBefore(n,e)}}function o(){"complete"===p.readyState&&i()}function i(){s("mark",["domContent",a()+g.offset],null,"api")}function a(){return E.exists&&performance.now?Math.round(performance.now()):(c=Math.max((new Date).getTime(),c))-g.offset}var c=(new Date).getTime(),s=t("handle"),f=t(20),u=t("ee"),d=window,p=d.document,h="addEventListener",l="attachEvent",m=d.XMLHttpRequest,v=m&&m.prototype;NREUM.o={ST:setTimeout,SI:d.setImmediate,CT:clearTimeout,XHR:m,REQ:d.Request,EV:d.Event,PR:d.Promise,MO:d.MutationObserver};var w=""+location,y={beacon:"bam.nr-data.net",errorBeacon:"bam.nr-data.net",agent:"js-agent.newrelic.com/nr-spa-1071.min.js"},b=m&&v&&v[h]&&!/CriOS/.test(navigator.userAgent),g=e.exports={offset:c,now:a,origin:w,features:{},xhrWrappable:b};t(17),p[h]?(p[h]("DOMContentLoaded",i,!1),d[h]("load",r,!1)):(p[l]("onreadystatechange",o),d[l]("onload",r)),s("mark",["firstbyte",c],null,"api");var x=0,E=t(22)},{}]},{},["loader",2,15,5,3,4]);</script>
  


<meta id="bb-canon-url" name="bb-canon-url" content="https://bitbucket.org">
<meta name="bb-api-canon-url" content="https://api.bitbucket.org">


<meta name="bb-commit-hash" content="d1f637a9968a">
<meta name="bb-app-node" content="app-189">
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
  window.__sentry__ = {"dsn": "https://ea49358f525d4019945839a3d7a8292a@sentry.io/159509", "release": "d1f637a9968a (production)", "tags": {"project": "bitbucket-core"}, "environment": "production"};
</script>
<script src="https://d301sr5gafysq2.cloudfront.net/d1f637a9968a/dist/webpack/sentry.js" nonce=""></script>
  <script src="https://d301sr5gafysq2.cloudfront.net/d1f637a9968a/dist/webpack/early.js" nonce=""></script>
  
  
  
    <link href="/sonnayasomnambula/googletestprimerrussian/rss" rel="alternate nofollow" type="application/rss+xml" title="RSS feed for GoogleTestPrimerRussian" />

</head>
<body class="production adg3 "
    data-static-url="https://d301sr5gafysq2.cloudfront.net/d1f637a9968a/"
data-base-url="https://bitbucket.org"
data-no-avatar-image="https://d301sr5gafysq2.cloudfront.net/d1f637a9968a/img/default_avatar/user_blue.svg"
data-current-user="{&quot;isKbdShortcutsEnabled&quot;: true, &quot;isSshEnabled&quot;: false, &quot;isAuthenticated&quot;: false}"
data-atlassian-id="{&quot;loginStatusUrl&quot;: &quot;https://id.atlassian.com/profile/rest/profile&quot;}"
data-settings="{&quot;MENTIONS_MIN_QUERY_LENGTH&quot;: 3}"

data-current-repo="{&quot;scm&quot;: &quot;hg&quot;, &quot;readOnly&quot;: false, &quot;mainbranch&quot;: {&quot;name&quot;: &quot;default&quot;}, &quot;uuid&quot;: &quot;e08d5056-1536-4fab-b412-3de6c11f0c69&quot;, &quot;language&quot;: &quot;markdown&quot;, &quot;owner&quot;: {&quot;username&quot;: &quot;sonnayasomnambula&quot;, &quot;uuid&quot;: &quot;a333feef-d86c-4d07-b6c3-add583321656&quot;, &quot;isTeam&quot;: false}, &quot;fullslug&quot;: &quot;sonnayasomnambula/googletestprimerrussian&quot;, &quot;slug&quot;: &quot;googletestprimerrussian&quot;, &quot;id&quot;: 18049854, &quot;pygmentsLanguage&quot;: null}"
data-current-cset="1c98dd1fce864a83aff8f0f5dedd1b804fa3847d"






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
  <a href="/sonnayasomnambula/googletestprimerrussian">GoogleTestPrimerRussian</a>
</li>
    
  <li>
    <a href="/sonnayasomnambula/googletestprimerrussian/src">
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
        <button data-branches-tags-url="/api/1.0/repositories/sonnayasomnambula/googletestprimerrussian/branches-tags"
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
        
          <a href="/sonnayasomnambula/googletestprimerrussian/src/1c98dd1fce86/README.md?at=default"
            class="aui-button pjax-trigger source-toggle" aria-pressed="true">
            Source
          </a>
          <a href="/sonnayasomnambula/googletestprimerrussian/diff/README.md?diff2=1c98dd1fce86&at=default"
            class="aui-button pjax-trigger diff-toggle"
            title="Diff to previous change">
            Diff
          </a>
          <a href="/sonnayasomnambula/googletestprimerrussian/history-node/1c98dd1fce86/README.md?at=default"
            class="aui-button pjax-trigger history-toggle">
            History
          </a>
        
      </div>

      
      

    </div>
  
  <h1>
    
      
        <a href="/sonnayasomnambula/googletestprimerrussian/src/1c98dd1fce86?at=default"
          class="pjax-trigger root" title="sonnayasomnambula/googletestprimerrussian at 1c98dd1fce86">GoogleTestPrimerRussian</a> /
      
      
        
          
            <span class="file-name">README.md</span>
          
        
      
    
  </h1>
  
    
    
  
  <div class="clearfix"></div>
</header>


  
    
  

  <div id="editor-container" class="maskable"
       data-module="repo/source/editor"
       data-repo-id="18049854"
       data-owner="sonnayasomnambula"
       data-slug="googletestprimerrussian"
       data-is-writer="false"
       data-has-push-access="true"
       data-hash="1c98dd1fce864a83aff8f0f5dedd1b804fa3847d"
       data-branch="default"
       data-path="README.md"
       data-source-url="/api/internal/repositories/sonnayasomnambula/googletestprimerrussian/src/1c98dd1fce864a83aff8f0f5dedd1b804fa3847d/README.md">
    <div id="source-view" class="file-source-container" data-module="repo/source/view-file" data-is-lfs="false">
      <div class="toolbar">
        <div class="primary">
          <div class="aui-buttons">
            
              <button id="file-history-trigger" class="aui-button aui-button-light changeset-info"
                      data-changeset="1c98dd1fce864a83aff8f0f5dedd1b804fa3847d"
                      data-path="README.md"
                      data-current="1c98dd1fce864a83aff8f0f5dedd1b804fa3847d">
                 

  <div class="aui-avatar aui-avatar-xsmall">
    <div class="aui-avatar-inner">
      <img src="https://bitbucket.org/account/sonnayasomnambula/avatar/16/?ts=1527004459">
    </div>
  </div>
  <span class="changeset-hash">1c98dd1</span>
  <time datetime="2016-04-25T11:25:51+00:00" class="timestamp"></time>
  <span class="aui-icon-dropdown"></span>

              </button>
            
          </div>
          
          <a href="/sonnayasomnambula/googletestprimerrussian/full-commit/1c98dd1fce86/README.md" id="full-commit-link"
             title="View full commit 1c98dd1">Full commit</a>
        </div>
        <div class="secondary">
          
          <div class="aui-buttons">
            
              <a href="/sonnayasomnambula/googletestprimerrussian/annotate/1c98dd1fce864a83aff8f0f5dedd1b804fa3847d/README.md?at=default"
                 class="aui-button aui-button-light pjax-trigger blame-link">Annotate</a>
              
                
                <a data-embed-url="https://bitbucket.org/sonnayasomnambula/googletestprimerrussian/src/1c98dd1fce864a83aff8f0f5dedd1b804fa3847d/README.md?embed=t" class="aui-button aui-button-light js-embed-link">
                  Embed
                </a>
              
            
            <a href="/sonnayasomnambula/googletestprimerrussian/raw/1c98dd1fce864a83aff8f0f5dedd1b804fa3847d/README.md" class="aui-button aui-button-light raw-link">Raw</a>
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
    <h1 id="markdown-header-google-c-testing-framework">Введение в Google C++ Testing Framework</h1>
<p><em>Это перевод <a data-is-external-link="true" href="https://github.com/google/googletest/blob/master/googletest/docs/Primer.md" rel="nofollow">Google C++ Testing Framework Primer</a>, выполненный <strong>demin</strong>, благополучно потерянный гуглом при переезде с code.google.com на github и вытащенный из кэша гугла</em></p>
<h2 id="markdown-header-google-c-testing-framework_1">Введение: Что такое Google C++ Testing Framework?</h2>
<p><em>Google C++ Testing Framework</em> (далее по тексту <em>Google Test</em>) призвана помочь вам в создании качественных тестов для программ на C++.</p>
<p>Неважно, работаете ли вы в Linux, Windows или Mac - если вы пишете программы на С++, то Google Test поможет вам в этом.</p>
<p>Что значит <em>хороший тест</em>, и как именно Google Test помогает делать хорошие тесты?</p>
<ul>
<li>Тесты должны быть <em>независимыми</em> и <em>повторяемыми</em>. Неудобно отлаживать тест, когда его результат зависит от других тестов. Google Test изолирует каждый тест, запуская его отдельным объектом. Если тест сбоит, то Google Test дает возможность запускать его независимо для быстрой отладки.</li>
<li>Тесты должны быть грамотно организованы и отражать структуру тестируемого кода. Google Test группирует тесты в наборы (<em>test cases</em>), которые могут иметь общие данные и подпрограммы. Такой подход просто реализуем и позволяет легко управлять тестами. Подобное единообразие крайне полезно, когда люди переключаются с одного проекта на другой и начинают работать с новым для них кодом.</li>
<li>Тесты должны быть переносимы и пригодны для повторного использования. В мире открытого программного обеспечения очень много переносимого кода, поэтому его тесты также должны быть переносимы. Google Test работает на разных операционных системах, с разными компиляторами, с поддержкой исключений или нет, поэтому тесты в Google Test могут работать в разнообразных конфигурациях. (На данный момент имеются скрипты для сборки только под Linux - мы работаем над скриптами для других платформ).</li>
<li>Когда тест дает сбой, он должен предоставлять <em>максимум</em> информации об ошибке. Google Test не останавливается при первом же сбое. Наоборот, только текущий тест прерывается, а управление передается следующему тесту. Вы можете использовать в тестах <em>мягкие</em> (нефатальные) типы проверок, после сбоя на которых тест продолжает работу. Таким образом, вы можете обнаружить и исправить несколько ошибок в одном прогоне.</li>
<li>Среда тестирования должна избавить автора тестов от рутинных операций и позволить сконцентрироваться непосредственно на <em>cмысле</em> тестов. Google Test автоматически регистрирует все объявленные тесты и не требует от программиста ручного добавления их в систему запуска.</li>
<li>Тесты должны быть <em>быстрыми</em>. В Google Test вы можете повторно использовать общие для всех тестов или какого-то конкретного тестового набора ресурсы без необходимости делать тесты зависимыми друг от друга, так как есть возможность инициализировать среду тестирования и чистить мусор только один раз. Так как Google Test построена на базе популярной архитектуры xUnit, вы будете чувствовать себя как дома, если вы раньше работали с JUnit или PyUnit. Если нет, вам потребуется 10 минут чтобы освоить основы и начать работать. Поехали!</li>
</ul>
<p><em>Замечание:</em> Как упоминалось раньше, неформально полное название Google C++ Testing Framework может сокращаться до <em>Google Test</em>.</p>
<h2 id="markdown-header-">Создание нового проекта</h2>
<p>Для создания тестовой программы с использованием Goole Test вам необходимо скомпилировать Google Test в формат библиотеки и прилинковать к вашим тестам. Мы создали необходимые скрипты и файлы конфигурации для некоторых популярных системы сборки (<code>msvc/</code> для Visual Studio, <code>xcode/</code> для Mac Xcode, <code>make/</code> для GNU make, <code>codegear/</code> для Borland C++ Builder, <code>scons/</code> для Scons, и скрипт для autotools в корневом каталоге Google Test). Если вы используете другую систему сборки, возьмите за образец файл <code>make/Makefile</code> чтобы понять, как собрать Google Test (по сути, вам надо скомпилировать <code>src/gtest-all.cc</code> со значениями <code>GTEST_ROOT</code> и <code>GTEST_ROOT/include</code> в списке путей для заголовочных файлов, где <code>GTEST_ROOT</code> является корневым каталогом директории Google Test).</p>
<p>Скомпилировав Google Test как библиотеку, вы можете создать новый проект. Убедитесь, что путь <code>GTEST_ROOT/include</code> включен в список поиска заголовочных файлов, чтобы компилятор смог найти <code>&lt;gtest/gtest.h&gt;</code>. Проект должен быть слинкован с библиотекой Google Test (например, для Visual Studio, вы можете добавить зависимость от <code>gtest.vcproj</code>). Если какие-то моменты остались неясными, посмотрите, как у Google Test устроена система самотестирования, и используйте ее в качестве примера.</p>
<h2 id="markdown-header-_1">Основная идея</h2>
<p>Работая с Google Test, вы пишете <em>утверждения</em>, которые являются операторами проверки истинности некоторого условия. Проверка утверждения может закончится <em>успехом</em>, <em>фатальной ошибкой</em> (<em>fatal error</em>) или <em>нефатальной ошибкой</em> (<em>non-fatal error</em>). При фатальной ошибке выполнение текущей функции прерывается. В противном случае программа просто продолжает работу дальше.</p>
<p><em>Тесты</em> используют утверждения для проверки логики работы программного кода. Если тест аварийно завершается или какое-либо утверждение в нем не срабатывает, то считается, что тест <em>дал сбой</em>, иначе тест считается <em>успешным</em>.</p>
<p>Вы можете группировать тесты в <em>наборы</em> (<em>test cases</em>), сообразно структуре тестируемой программы. Если несколько тестов используют общие объекты и подпрограммы, вы может объединить их в <em>тестовый класс</em> (<em>test fixture</em>).</p>
<p><em>Тестовая программа</em> может состоять из нескольких наборов тестов.</p>
<p>Мы покажем, как писать тестовую программу, начиная с уровня отдельных утверждений, затем поднимаясь на уровень тестовых наборов и тестовых классов.</p>
<h2 id="markdown-header-_2">Утверждения</h2>
<p>Утверждения в Google Test являются макросами, схожими с вызовами функций. Вы тестируете класс или функцию, делая предположения в форме утверждений, которые соответствуют ожидаемой логике. Когда утверждение не срабатывает, Google Test печатает имя файла и номер строки, где произошел сбой. Также выводится диагностическое сообщение об ошибке. Вы можете задавать свои собственные дополнительные сообщения, которые будут добавлены к стандартному.</p>
<p>Утверждения бывают двух типов, схожих по названию, но по разному влияющих на выполнение текущей функции. <code>ASSERT_*</code> генерируют фатальные ошибки, при возникновении которых <em>выполнение текущей функции прерывается</em>. Другой тип, <code>EXPECT_*</code>, генерирует "мягкие", нефатальные ошибки, которые не прерывают текущую функцию. Такие утверждения являются более предпочтительными, так как дают возможность обнаружить сразу несколько проблем в тесте. Однако вам следует использовать <code>ASSERT_*</code>, если уже не имеет смысла продолжать тест после сбоя.</p>
<p>Когда показавший ошибку <code>ASSERT_*</code> немедленно прерывает выполнение текущей функции, возможно, что часть кода, ответственного за чистку мусора и освобождение ресурсов после теста, не будет выполнена, что может привести к утечкам памяти. В зависимости от типа утечки может и не стоит заботиться о них в данном случае, но надо быть готовым к возможным сообщениям об ошибках от систем проверки динамически распределенной памяти.</p>
<p>Чтобы вывести свое собственное сообщение об ошибке, просто используйте макрос утверждения как стандартный поток и оператор <code>&lt;&lt;</code>. Например:</p>
<div class="codehilite language-c++"><pre><span></span><span class="n">ASSERT_EQ</span><span class="p">(</span><span class="n">x</span><span class="p">.</span><span class="n">size</span><span class="p">(),</span> <span class="n">y</span><span class="p">.</span><span class="n">size</span><span class="p">())</span> <span class="o">&lt;&lt;</span> <span class="s">&quot;Длина вектора x не равна длине вектора y&quot;</span><span class="p">;</span>

<span class="k">for</span> <span class="p">(</span><span class="kt">int</span> <span class="n">i</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span> <span class="n">i</span> <span class="o">&lt;</span> <span class="n">x</span><span class="p">.</span><span class="n">size</span><span class="p">();</span> <span class="o">++</span><span class="n">i</span><span class="p">)</span> <span class="p">{</span>
  <span class="n">EXPECT_EQ</span><span class="p">(</span><span class="n">x</span><span class="p">[</span><span class="n">i</span><span class="p">],</span> <span class="n">y</span><span class="p">[</span><span class="n">i</span><span class="p">])</span> <span class="o">&lt;&lt;</span> <span class="s">&quot;Вектора x и y имеют отличия по индексу &quot;</span> <span class="o">&lt;&lt;</span> <span class="n">i</span><span class="p">;</span>
<span class="p">}</span>
</pre></div>


<p>Так можно распечатать все, что может быть выведено в поток <code>ostream</code>. В частности, строки языка С и объекты <code>string</code>. Если печатается многобайтовая строка (<code>wchar_t*</code>, <code>TCHAR*</code> в режиме <code>UNICODE</code> в Windows, или <code>std::wstring</code>), то она будет преобразована в кодировку UTF-8.</p>
<h3 id="markdown-header-_3">Основные типы утверждений</h3>
<p>Данные утверждения производят проверку на ложь/истина.</p>
<table>
<thead>
<tr>
<th><em>Фатальное утверждение</em></th>
<th><em>Нефатальное утверждение</em></th>
<th><em>Цель проверки</em></th>
</tr>
</thead>
<tbody>
<tr>
<td><code>ASSERT_TRUE( _условие_ );</code></td>
<td><code>EXPECT_TRUE( _условие_ );</code></td>
<td><em>условие</em> истино</td>
</tr>
<tr>
<td><code>ASSERT_FALSE( _условие_ );</code></td>
<td><code>EXPECT_FALSE( _условие_ );</code></td>
<td><em>условие</em> ложно</td>
</tr>
</tbody>
</table>
<p>Обратите внимание, что когда утверждение дает сбой, <code>ASSERT_*</code> генерирует фатальную ошибку и прекращает выполнение текущей функции, тогда как <code>EXPECT_*</code> генерирует "мягкую", нефатальную ошибку, и текущая функция продолжает выполнение. В любом случае считается, что данный тест в целом дал сбой.</p>
<p><em>Доступность</em>: Linux, Windows, Mac.</p>
<h3 id="markdown-header-_4">Парное сравнение</h3>
<p>Этот раздел описывает утверждения для сравнение друх значений.</p>
<table>
<thead>
<tr>
<th><em>Фатальное утверждение</em></th>
<th><em>Нефатальное утверждение</em></th>
<th><em>Цель проверки</em></th>
</tr>
</thead>
<tbody>
<tr>
<td><code>ASSERT_EQ( _знач1_, _знач2_ );</code></td>
<td><code>EXPECT_EQ( _знач1_, _знач2_ );</code></td>
<td><code>_знач1_ == _знач2_</code></td>
</tr>
<tr>
<td><code>ASSERT_NE( _знач1_, _знач2_ );</code></td>
<td><code>EXPECT_NE( _знач1_, _знач2_ );</code></td>
<td><code>_знач1_ != _знач2_</code></td>
</tr>
<tr>
<td><code>ASSERT_LT( _знач1_, _знач2_ );</code></td>
<td><code>EXPECT_LT( _знач1_, _знач2_ );</code></td>
<td><code>_знач1_ &lt; _знач2_</code></td>
</tr>
<tr>
<td><code>ASSERT_LE( _знач1_, _знач2_ );</code></td>
<td><code>EXPECT_LE( _знач1_, _знач2_ );</code></td>
<td><code>_знач1_ &lt;= _знач2_</code></td>
</tr>
<tr>
<td><code>ASSERT_GT( _знач1_, _знач2_ );</code></td>
<td><code>EXPECT_GT( _знач1_, _знач2_ );</code></td>
<td><code>_знач1_ &gt; _знач2_</code></td>
</tr>
<tr>
<td><code>ASSERT_GE( _знач1_, _знач2_ );</code></td>
<td><code>EXPECT_GE( _знач1_, _знач2_ );</code></td>
<td><code>_знач1_ &gt;= _знач2_</code></td>
</tr>
</tbody>
</table>
<p>В случае ошибки Google Test печатает оба значения, и <em>знач1</em>, и <em>знач2</em>.</p>
<p><em>Историческая справка</em>: до февраля 2016 в выражении <code>*_EQ</code> первый параметр считался ожидаемым значением, а второй - значением, полученным на самом деле. Довольно много кода было написано с расчётом именно на такой порядок. Сейчас оба параметра выражения <code>*_EQ</code> обрабатываются одинаково.</p>
<p>Значения аргументов должны иметь возможность сравнения, иначе вы получите сообщение компилятора об ошибке. Значения также должны поддерживать оператор <code>&lt;&lt;</code> для вывода в поток <code>ostream</code>. Все встроенные типы данных удовлетворяют этим условиям.</p>
<p>Утверждения могут работать с пользовательскими типами, но только если вы зададите соответственные операторы сравнения (например, <code>==</code>, <code>&lt;</code> и т.д.). Если соответствующий оператор определен, то предпочтительнее использовать макросы <code>ASSERT_*()</code>, так как они печатают не только результат сравнения, но сами операнды.</p>
<p>Аргументы всегда вычисляются только один раз, поэтому можно спокойно использовать вызовы с побочными эффектами. Однако, в языках С и С++ порядок вычисления аргументов функций не определен, и компилятор может их вычислить в любом порядке, поэтому полагаться на определенный порядок вычисления аргументов утверждения нельзя.</p>
<p><code>ASSERT_EQ()</code> поддерживает сравнение указателей. Если это две строки С, будет проверено, указывают ли они на одну и ту же область памяти, и значения самих строк сравниваться не будут. Если же вы хотите сравнить значения двух строк С (например, <code>const char*</code>), то используйте <code>ASSERT_STREQ()</code>, которое будет описано ниже. В частности, для проверки строки С на <code>NULL</code> используйте <code>ASSERT_STREQ(NULL, c_string)</code>, однако для сравнения двух объектов типа <code>string</code> надо использовать <code>ASSERT_EQ</code>.</p>
<p>Макросы, описанные в данном разделе, работают с обычными и многобайтовыми строковыми объектами (<code>string</code> и <code>wstring</code>).</p>
<p><em>Доступность</em>: Linux, Windows, Mac.</p>
<h3 id="markdown-header-_5">Сравнение строк</h3>
<p>Утверждения в данной группе все сравнивают <em>строки С</em>. Если вы хотите сравнить два объекта типа <code>string</code>, то используйте вместо них <code>EXPECT_EQ</code>, <code>EXPECT_NE</code> и т.д.</p>
<table>
<thead>
<tr>
<th><em>Фатальное утверждение</em></th>
<th><em>Нефатальное утверждение</em></th>
<th><em>Цель проверки</em></th>
</tr>
</thead>
<tbody>
<tr>
<td><code>ASSERT_STREQ( _стр1_, _стр2_ );</code></td>
<td><code>EXPECT_STREQ( _стр1_, _стр2_ );</code></td>
<td>две строки С содержат одинаковые значения</td>
</tr>
<tr>
<td><code>ASSERT_STRNE( _стр1_, _стр2_ );</code></td>
<td><code>EXPECT_STRNE( _стр1_, _стр2_ );</code></td>
<td>две строки С содержат разные значения</td>
</tr>
<tr>
<td><code>ASSERT_STRCASEEQ( _стр1_, _стр2_ );</code></td>
<td><code>EXPECT_STREQ( _стр1_, _стр2_ );</code></td>
<td>две строки С содержат одинаковые значения без учета регистра</td>
</tr>
<tr>
<td><code>ASSERT_STRCASENE( _стр1_, _стр2_ );</code></td>
<td><code>EXPECT_STRNE( _стр1_, _стр2_ );</code></td>
<td>две строки С содержат разные значения без учета регистра</td>
</tr>
</tbody>
</table>
<p>Обратите внимание, что "CASE" в имени утверждения означает, то регистр будет проигнорирован.</p>
<p><code>*STREQ*</code> и <code>*STRNE*</code> также могут работать с многобайтовыми строками С (<code>wchar_t*</code>). В случае неудачного сравнения двух многобайтовых строк их значения буду напечатаны в виде однобайтовых строк в формате UTF-8.</p>
<p>Значение указателя <code>NULL</code> и пустая строка являются <em>разными</em> значениям.</p>
<p><em>Доступность</em>: Linux, Windows, Mac.</p>
<p>См. также: Более подробная информация о приемах сравнения (например, подстроки, префиксы и регулярные выражения), см. <a data-is-external-link="true" href="https://github.com/google/googletest/blob/master/googletest/docs/AdvancedGuide.md" rel="nofollow">Advanced Google Test Guide</a>.</p>
<h2 id="markdown-header-_6">Элементарные тесты</h2>
<p>Для создания теста:</p>
<ul>
<li>Используйте макрос <code>TEST()</code> для определения функции теста. Это обычная функция языка С++, которая не имеет возвращаемого значения. </li>
<li>В этой функции можно использовать любые корректные операторы С++ вместе с утверждениями Google Test для проверки значений. </li>
<li>Результат теста определяется утверждениями; если хоть одно утверждение в тесте дало ошибку (фатальную или нефатальную), или если тест завершился аварийно, но тест в целом считается сбойным. В противном случае, тест регистрируется как успешный.</li>
</ul>
<div class="codehilite language-c++"><pre><span></span><span class="n">TEST</span><span class="p">(</span><span class="err">имя</span><span class="n">_</span><span class="err">набора</span><span class="n">_</span><span class="err">тестов</span><span class="p">,</span> <span class="err">имя</span><span class="n">_</span><span class="err">теста</span><span class="p">)</span> <span class="p">{</span>
 <span class="p">...</span> <span class="err">тело</span><span class="n">_</span><span class="err">теста</span> <span class="p">...</span>
<span class="p">}</span>
</pre></div>


<p>Аргуметы макроса <code>TEST()</code> идут от общего к частному. <em>Первый</em> аргумент является именем набора тестов, а <em>второй</em> -- именем теста в данном наборе. Набор тестов может содержать любое количество отдельных тестов. <em>Полное имя</em> теста состоит из имени набора, которому этот тест принадлежит, и его собственного имени. Тесты из разных наборов могут иметь одинаковые собственные имена.</p>
<p>Например, имеется функция, возвращающая целое:</p>
<div class="codehilite language-c++"><pre><span></span><span class="kt">int</span> <span class="nf">Factorial</span><span class="p">(</span><span class="kt">int</span> <span class="n">n</span><span class="p">);</span> <span class="c1">// Вернуть факториал n</span>
</pre></div>


<p>Тест для этой функции может быть таким:</p>
<div class="codehilite language-c++"><pre><span></span><span class="c1">// Проверить факториал от 0.</span>
<span class="n">TEST</span><span class="p">(</span><span class="n">FactorialTest</span><span class="p">,</span> <span class="n">HandlesZeroInput</span><span class="p">)</span> <span class="p">{</span>
  <span class="n">EXPECT_EQ</span><span class="p">(</span><span class="mi">1</span><span class="p">,</span> <span class="n">Factorial</span><span class="p">(</span><span class="mi">0</span><span class="p">));</span>
<span class="p">}</span>

<span class="c1">// Проверить факториал некоторых положительных значений.</span>
<span class="n">TEST</span><span class="p">(</span><span class="n">FactorialTest</span><span class="p">,</span> <span class="n">HandlesPositiveInput</span><span class="p">)</span> <span class="p">{</span>
  <span class="n">EXPECT_EQ</span><span class="p">(</span><span class="mi">1</span><span class="p">,</span> <span class="n">Factorial</span><span class="p">(</span><span class="mi">1</span><span class="p">));</span>
  <span class="n">EXPECT_EQ</span><span class="p">(</span><span class="mi">2</span><span class="p">,</span> <span class="n">Factorial</span><span class="p">(</span><span class="mi">2</span><span class="p">));</span>
  <span class="n">EXPECT_EQ</span><span class="p">(</span><span class="mi">6</span><span class="p">,</span> <span class="n">Factorial</span><span class="p">(</span><span class="mi">3</span><span class="p">));</span>
  <span class="n">EXPECT_EQ</span><span class="p">(</span><span class="mi">40320</span><span class="p">,</span> <span class="n">Factorial</span><span class="p">(</span><span class="mi">8</span><span class="p">));</span>
<span class="p">}</span>
</pre></div>


<p>Google test группирует результаты тестов по наборам, так что связанные по смыслу тесты должны быть в одном наборе; другими словами, первый аргумент их <code>TEST()</code> должен быть одинаковым. В приведенном выше примере вы имеем два теста, <code>HandlesZeroInput</code> and <code>HandlesPositiveInput</code>, принадлежащих одному набору с именем <code>FactorialTest</code>.</p>
<p><em>Доступность</em>: Linux, Windows, Mac.</p>
<h2 id="markdown-header-_7">Тестовые классы: использования единой конфигурации для нескольких тестов</h2>
<p>В какой-то момент вы может обнаружить, что пишете несколько тестов, использующих одинаковые данные. В этом случае можно задействовать <em>тестовые классы</em>, что позволит повторно использовать одну и ту же конфигурацию объектов для нескольких различных тестов.</p>
<p>Для создания тестового класса:</p>
<ul>
<li>Унаследуйте свой класс от <code>::testing::Test</code>. Начните описание класса с <code>protected:</code> или <code>public:</code> в зависимости от вашего желания дать доступ к членам тестового класса в его подклассах.</li>
<li>Внутри класса объявите любые объекты, которые планируете использовать.</li>
<li>Если это необходимо, напишите конструктор по умолчанию или функцию <code>SetUp()</code> для инициализации объекта для каждого теста. Распространенной ошибкой является написание <code>SetUp()</code> как <code>Setup()</code>, то есть со строчной буквой <code>u</code> -- не делайте этого.</li>
<li>Если требуется, также напишите деструктор или функцию <code>TearDown()</code> для освобождения ресурсов, распределенных в <code>SetUp()</code>. Для более подробной информации о том, когда использовать конструктор/деструктор, а когда <code>SetUp()/TearDown()</code>, обратитесь к <a data-is-external-link="true" href="https://github.com/google/googletest/blob/master/googletest/docs/FAQ.md#should-i-use-the-constructordestructor-of-the-test-fixture-or-the-set-uptear-down-function" rel="nofollow">вопросу в FAQ</a>.</li>
<li>Если необходимо, объявите подпрограммы, которые ваши тесты будут использовать.</li>
</ul>
<p>Когда используете тестовый класс, пишите <code>TEST_F()</code> вместе <code>TEST()</code>, что даст тесту доступ к объектам и подпрограммам тестового класса.</p>
<div class="codehilite language-c++"><pre><span></span><span class="n">TEST_F</span><span class="p">(</span><span class="err">имя</span><span class="n">_</span><span class="err">набора</span><span class="n">_</span><span class="err">тестов</span><span class="p">,</span> <span class="err">имя</span><span class="n">_</span><span class="err">теста</span><span class="p">)</span> <span class="p">{</span>
 <span class="p">...</span> <span class="err">тело</span><span class="n">_</span><span class="err">теста</span> <span class="p">...</span>
<span class="p">}</span>
</pre></div>


<p>Как и у <code>TEST()</code> первый аргумент -- это имя набора тестов, но для <code>TEST_F()</code> он должен совпадать с именем тестового класса. Возможно вы догадались: <code>_F</code> от английского <em>fixture</em>.</p>
<p>С сожалению система макросов в С++ не позволяет нам создать единый макрос, который бы поддерживал оба типа тестов. Использование неправильного макроса приведет к ошибке компиляции.</p>
<p>Также вы должны объявить тестовый класс до использования его имени в <code>TEST_F()</code>, иначе вы получите ошибку компиляции "virtual outside class declaration".</p>
<p>Для теста, объявленного с помощью <code>TEST_F()</code>, Google test:</p>
<ul>
<li>Создаст <em>новый</em> экземпляр тестового класса в процессе выполнения.</li>
<li>Сразу же проиницилизирует его через <code>SetUp()</code>.</li>
<li>Запустит тест.</li>
<li>Вызовет <code>TearDown()</code> для чистки мусора.</li>
<li>Удалит экземпляр тестового класса. Каждый тест в тестовом наборе будет работать со своим собственным экземпляром тестового класса, а Google Test всегда удаляет предыдущий экземпляр тестового класса перед созданием следующего.</li>
</ul>
<p>Google test не использует повторно один и тот же экземпляр тестового класса для разных тестов. Любые изменения, которые тест может сделать в очередном экземпляре тестового класса, не затрагивают остальные тесты.</p>
<p>Как пример, давайте напишем тест для очереди типа FIFO с именем <code>Queue</code>,
имеющей следующий интерфейс:</p>
<div class="codehilite language-c++"><pre><span></span><span class="k">template</span> <span class="o">&lt;</span><span class="k">typename</span> <span class="n">E</span><span class="o">&gt;</span> <span class="c1">// E - типа элемента.</span>
<span class="k">class</span> <span class="nc">Queue</span> <span class="p">{</span>
 <span class="k">public</span><span class="o">:</span>
  <span class="n">Queue</span><span class="p">();</span>
  <span class="kt">void</span> <span class="nf">Enqueue</span><span class="p">(</span><span class="k">const</span> <span class="n">E</span><span class="o">&amp;</span> <span class="n">element</span><span class="p">);</span>
  <span class="n">E</span><span class="o">*</span> <span class="nf">Dequeue</span><span class="p">();</span> <span class="c1">// Возвращает NULL, если очередь пуста.</span>
  <span class="kt">size_t</span> <span class="nf">size</span><span class="p">()</span> <span class="k">const</span><span class="p">;</span>
  <span class="p">...</span>
<span class="p">};</span>
</pre></div>


<p>Сначала определяем тестовый класс. По соглашению вам стоит назвать его <code>FooTest</code>, где <code>Foo</code> - имя тестируемого класса.</p>
<div class="codehilite language-c++"><pre><span></span><span class="k">class</span> <span class="nc">QueueTest</span> <span class="o">:</span> <span class="k">public</span> <span class="o">::</span><span class="n">testing</span><span class="o">::</span><span class="n">Test</span> <span class="p">{</span>
 <span class="k">protected</span><span class="o">:</span>
  <span class="k">virtual</span> <span class="kt">void</span> <span class="n">SetUp</span><span class="p">()</span> <span class="p">{</span>
    <span class="n">q1_</span><span class="p">.</span><span class="n">Enqueue</span><span class="p">(</span><span class="mi">1</span><span class="p">);</span>
    <span class="n">q2_</span><span class="p">.</span><span class="n">Enqueue</span><span class="p">(</span><span class="mi">2</span><span class="p">);</span>
    <span class="n">q2_</span><span class="p">.</span><span class="n">Enqueue</span><span class="p">(</span><span class="mi">3</span><span class="p">);</span>
  <span class="p">}</span>

  <span class="c1">// virtual void TearDown() {}</span>

  <span class="n">Queue</span><span class="o">&lt;</span><span class="kt">int</span><span class="o">&gt;</span> <span class="n">q0_</span><span class="p">;</span>
  <span class="n">Queue</span><span class="o">&lt;</span><span class="kt">int</span><span class="o">&gt;</span> <span class="n">q1_</span><span class="p">;</span>
  <span class="n">Queue</span><span class="o">&lt;</span><span class="kt">int</span><span class="o">&gt;</span> <span class="n">q2_</span><span class="p">;</span>
<span class="p">};</span>
</pre></div>


<p>В этом случае <code>TearDown()</code> не требуется, так как не нужно ничего освобождать после теста в дополнение к тому, что делается в деструкторе.</p>
<p>Теперь напишем тесты, используя <code>TEST_F()</code> и тестовый класс.</p>
<div class="codehilite language-c++"><pre><span></span><span class="n">TEST_F</span><span class="p">(</span><span class="n">QueueTest</span><span class="p">,</span> <span class="n">IsEmptyInitially</span><span class="p">)</span> <span class="p">{</span>
  <span class="n">EXPECT_EQ</span><span class="p">(</span><span class="mi">0</span><span class="p">,</span> <span class="n">q0_</span><span class="p">.</span><span class="n">size</span><span class="p">());</span>
<span class="p">}</span>

<span class="n">TEST_F</span><span class="p">(</span><span class="n">QueueTest</span><span class="p">,</span> <span class="n">DequeueWorks</span><span class="p">)</span> <span class="p">{</span>
  <span class="kt">int</span><span class="o">*</span> <span class="n">n</span> <span class="o">=</span> <span class="n">q0_</span><span class="p">.</span><span class="n">Dequeue</span><span class="p">();</span>
  <span class="n">EXPECT_EQ</span><span class="p">(</span><span class="nb">NULL</span><span class="p">,</span> <span class="n">n</span><span class="p">);</span>

  <span class="n">n</span> <span class="o">=</span> <span class="n">q1_</span><span class="p">.</span><span class="n">Dequeue</span><span class="p">();</span>
  <span class="n">ASSERT_TRUE</span><span class="p">(</span><span class="n">n</span> <span class="o">!=</span> <span class="nb">NULL</span><span class="p">);</span>
  <span class="n">EXPECT_EQ</span><span class="p">(</span><span class="mi">1</span><span class="p">,</span> <span class="o">*</span><span class="n">n</span><span class="p">);</span>
  <span class="n">EXPECT_EQ</span><span class="p">(</span><span class="mi">0</span><span class="p">,</span> <span class="n">q1_</span><span class="p">.</span><span class="n">size</span><span class="p">());</span>
  <span class="k">delete</span> <span class="n">n</span><span class="p">;</span>

  <span class="n">n</span> <span class="o">=</span> <span class="n">q2_</span><span class="p">.</span><span class="n">Dequeue</span><span class="p">();</span>
  <span class="n">ASSERT_TRUE</span><span class="p">(</span><span class="n">n</span> <span class="o">!=</span> <span class="nb">NULL</span><span class="p">);</span>
  <span class="n">EXPECT_EQ</span><span class="p">(</span><span class="mi">2</span><span class="p">,</span> <span class="o">*</span><span class="n">n</span><span class="p">);</span>
  <span class="n">EXPECT_EQ</span><span class="p">(</span><span class="mi">1</span><span class="p">,</span> <span class="n">q2_</span><span class="p">.</span><span class="n">size</span><span class="p">());</span>
  <span class="k">delete</span> <span class="n">n</span><span class="p">;</span>
<span class="p">}</span>
</pre></div>


<p>Мы использовали оба типа утверждений: <code>ASSERT_*</code> и <code>EXPECT_*</code>. Используйте <code>EXPECT_*</code>, если хотите, чтобы тест продолжил работу после регистрации ошибки. Если продолжение теста бессмысленно, то используйте <code>ASSERT_*</code>. Например, второе утверждение в тесте <code>Dequeue</code> -- <code>ASSERT_TRUE(n != NULL)</code>, так как мы собираемся разыменовывать указатель <code>n</code> ниже, а это может закончиться нарушением защиты памяти, если <code>n</code> равен <code>NULL</code>.</p>
<p>Когда все это запускается, происходит следующее:</p>
<ul>
<li>Google Test создает объект <code>QueueTest</code> (назовем его <code>t1</code>).</li>
<li><code>t1.SetUp()</code> инициализирует <code>t1</code>.</li>
<li>Первый тест (<code>IsEmptyInitially</code>) использует <code>t1</code>.</li>
<li><code>t1.TearDown()</code> чистит мусор, когда тест закачивается.</li>
<li><code>t1</code> уничтожается.</li>
<li>Все шаги повторяются снова с другим объектом <code>QueueTest</code>, который на этот раз используется в тесте <code>DequeueWorks</code>.</li>
</ul>
<p><em>Доступность</em>: Linux, Windows, Mac.</p>
<p><em>Замечание</em>: Google test автоматически сохраняет все свои <em>настройки</em>, когда тестовый объект создается и восстанавливает, когда он уже уничтожен.</p>
<h2 id="markdown-header-_8">Запуск тестов</h2>
<p><code>TEST()</code> и <code>TEST_F()</code> автоматически регистрируют ваши тест в Google Test. Так что в отличие от многих других утилит тестирования для С++ вам не надо вручную прописывать тест в отдельном списке для запуска.</p>
<p>После объявление тестов вы можете просто вызвать функцию <code>RUN_ALL_TESTS()</code>, которая вернет <code>0</code>, если все тесты прошли успешно, и <code>1</code> в противном случае. <code>RUN_ALL_TESTS()</code> запускает <em>все тесты</em> в вашем исполняемом модуле -- тесты могут находиться в разных тестовых наборах или разных исходных модулях.</p>
<p>При старте макрос <code>RUN_ALL_TESTS()</code>:</p>
<ul>
<li>Запоминает настройки Google Test.</li>
<li>Создает объект тестового класса первого теста.</li>
<li>Инициализирует его вызовом <code>SetUp()</code>.</li>
<li>Запускает тест с использованием объекта тестового класса.</li>
<li>Производит чистку мусора объекта тестового класса путем вызова <code>TearDown()</code>.</li>
<li>Удаляет объект тестового класса.</li>
<li>Восстанавливает настройки Google Test.</li>
<li>Повторяет указанные шаги для всех остальных тестов.</li>
</ul>
<p>Дополнительно, если конструктор тестового класса завершился с ошибкой на шаге 2, шаги с 3 до 5 пропускаются. Аналогично если на шаге 3 возникает ошибка, то шаг 4 пропускается.</p>
<p><em>Важно</em>: Вы не должны игнорировать возвращаемое функцией <code>RUN_ALL_TESTS()</code> значение, иначе <code>gcc</code> сообщит вам об ошибке. Смысл этого в том, что автоматизированная система тестирования определяет успешность прохождения тестов по коду возврата, а не по данным, выведенным в стандартные потоки stdout/stderr; поэтому ваша функция <code>main()</code> должна возвращать значение, полученное от <code>RUN_ALL_TESTS()</code>.</p>
<p>Также стоит помнить, что вы можете вызывать <code>RUN_ALL_TESTS()</code> только <em>один</em> раз. Повторный ее вызов может конфликтовать с дополнительными возможностями Google Test (например, "смертельные" тесты), и данная возможность не поддерживается.</p>
<p><em>Доступность</em>: Linux, Windows, Mac.</p>
<h2 id="markdown-header-main">Пишем функцию main()</h2>
<p>Можете начать вот с такой заготовки:</p>
<div class="codehilite language-c++"><pre><span></span><span class="cp">#include</span> <span class="cpf">&quot;this/package/foo.h&quot;</span><span class="cp"></span>
<span class="cp">#include</span> <span class="cpf">&lt;gtest/gtest.h&gt;</span><span class="cp"></span>

<span class="k">namespace</span> <span class="p">{</span>

<span class="c1">// Тестовый класс для тестирования класса Foo.</span>
<span class="k">class</span> <span class="nc">FooTest</span> <span class="o">:</span> <span class="k">public</span> <span class="o">::</span><span class="n">testing</span><span class="o">::</span><span class="n">Test</span> <span class="p">{</span>
 <span class="k">protected</span><span class="o">:</span>
  <span class="c1">// Можете удалить любую или все из функций ниже, если они пустые.</span>

  <span class="n">FooTest</span><span class="p">()</span> <span class="p">{</span>
    <span class="c1">// Здесь можно подготовить тестовые данные для каждого теста.</span>
  <span class="p">}</span>

  <span class="k">virtual</span> <span class="o">~</span><span class="n">FooTest</span><span class="p">()</span> <span class="p">{</span>
    <span class="c1">// Здесь производится чистка мусора. Данная функция не должна</span>
    <span class="c1">// генерировать исключений.</span>
  <span class="p">}</span>

  <span class="c1">// Если конструктор или деструктор не подходят вам для настройки</span>
  <span class="c1">// тестовых данных и чистки мусора, то можете использовать следующие</span>
  <span class="c1">// методы:</span>

  <span class="k">virtual</span> <span class="kt">void</span> <span class="n">SetUp</span><span class="p">()</span> <span class="p">{</span>
    <span class="c1">// Данная функция вызывается сразу после конструктора (до теста).</span>
  <span class="p">}</span>

  <span class="k">virtual</span> <span class="kt">void</span> <span class="n">TearDown</span><span class="p">()</span> <span class="p">{</span>
    <span class="c1">// Данная функция вызывается сразу после теста (до деструктора).</span>
  <span class="p">}</span>

  <span class="c1">// Объекты, объявленные тут, могут быть использованы во всем тестовом</span>
  <span class="c1">// классе Foo.</span>
<span class="p">};</span>

<span class="c1">// Проверяем, что метод Foo::Bar() правильно делает функцию Abc.</span>
<span class="n">TEST_F</span><span class="p">(</span><span class="n">FooTest</span><span class="p">,</span> <span class="n">MethodBarDoesAbc</span><span class="p">)</span> <span class="p">{</span>
  <span class="k">const</span> <span class="n">string</span> <span class="n">input_filepath</span> <span class="o">=</span> <span class="s">&quot;this/package/testdata/myinputfile.dat&quot;</span><span class="p">;</span>
  <span class="k">const</span> <span class="n">string</span> <span class="n">output_filepath</span> <span class="o">=</span> <span class="s">&quot;this/package/testdata/myoutputfile.dat&quot;</span><span class="p">;</span>
  <span class="n">Foo</span> <span class="n">f</span><span class="p">;</span>
  <span class="n">EXPECT_EQ</span><span class="p">(</span><span class="mi">0</span><span class="p">,</span> <span class="n">f</span><span class="p">.</span><span class="n">Bar</span><span class="p">(</span><span class="n">input_filepath</span><span class="p">,</span> <span class="n">output_filepath</span><span class="p">));</span>
<span class="p">}</span>

<span class="c1">// Проверяем, что класс Foo правильно выполняет задачу Xyz.</span>
<span class="n">TEST_F</span><span class="p">(</span><span class="n">FooTest</span><span class="p">,</span> <span class="n">DoesXyz</span><span class="p">)</span> <span class="p">{</span>
  <span class="c1">// Убеждаемся, что Xyz работает правильно в Foo.</span>
<span class="p">}</span>

<span class="p">}</span>  <span class="c1">// namespace</span>

<span class="kt">int</span> <span class="n">main</span><span class="p">(</span><span class="kt">int</span> <span class="n">argc</span><span class="p">,</span> <span class="kt">char</span> <span class="o">**</span><span class="n">argv</span><span class="p">)</span> <span class="p">{</span>
  <span class="o">::</span><span class="n">testing</span><span class="o">::</span><span class="n">InitGoogleTest</span><span class="p">(</span><span class="o">&amp;</span><span class="n">argc</span><span class="p">,</span> <span class="n">argv</span><span class="p">);</span>
  <span class="k">return</span> <span class="nf">RUN_ALL_TESTS</span><span class="p">();</span>
<span class="p">}</span>
</pre></div>


<p>Функция <code>::testing::InitGoogleTest()</code> производит разбор параметров командной строки для Google Test и удаляет все неизвестные флаги. Это позволяет пользователю управлять тестовой программой через различные флаги, описанные в <a data-is-external-link="true" href="https://github.com/google/googletest/blob/master/googletest/docs/AdvancedGuide.md" rel="nofollow">GoogleTestAdvancedGuide</a>. Вы должны вызвать эту функцию до <code>RUN_ALL_TESTS()</code>. Иначе настройки Google Test не будут должным образом проинициализированы.</p>
<p>В Windows <code>InitGoogleTest()</code> поддерживает многобайтовые строки, и может быть скомпилирована в режиме <code>UNICODE</code>.</p>
<p>Резонно предположить, что написание функции main() занятие скучное. Может быть, и поэтому Google Test предоставляет уже готовую реализацию фунции main(). Если она вас устраивает, то просто прилинкуйте библиотеку gtest_main и все.</p>
<h3 id="markdown-header-visual-c">Важное замечание для пользователей Visual C++</h3>
<p>Если вы помещаете тесты в библиотеку, а ваша функция <code>main()</code> находится в другой библиотеке или .exe файле, то такие тесты не будут работать. Причина в <a data-is-external-link="true" href="https://connect.microsoft.com/feedback/viewfeedback.aspx?FeedbackID=244410&amp;siteid=210" rel="nofollow">ошибке</a> в Visual C++. Когда вы определяете тесты, Google Test создает соответствующие статические объекты для их регистрации. На эти объекты никто не ссылается, но их конструкторы все равно работают. Когда линкер Visual C++ обнаруживает, что ни на один объект в библиотеке никто не ссылается, он исключает такую библиотеку из линковки. Вам надо как-то сослаться на вашу библиотеку, чтобы линкер ее не выкинул. И вот как это делается. Где-нибудь в коде библиотеки объявите функцию:</p>
<div class="codehilite language-c++"><pre><span></span><span class="kr">__declspec</span><span class="p">(</span><span class="n">dllimport</span><span class="p">)</span> <span class="kt">int</span> <span class="n">PullInMyLibrary</span><span class="p">()</span> <span class="p">{</span> <span class="k">return</span> <span class="mi">0</span><span class="p">;</span> <span class="p">}</span>
</pre></div>


<p>Если вы помещаете тесты в статическую библиотеку (не DLL), тогда <code>__declspec(dllexport)</code> не нужно. Затем в главной программе напишите код, который будет вызывать данную функцию:</p>
<div class="codehilite language-c++"><pre><span></span><span class="kt">int</span> <span class="nf">PullInMyLibrary</span><span class="p">();</span>
<span class="k">static</span> <span class="kt">int</span> <span class="n">dummy</span> <span class="o">=</span> <span class="n">PullInMyLibrary</span><span class="p">();</span>
</pre></div>


<p>Это создаст видимость явного использования вашей библиотеки тестами, и позволит им быть зарегистрированными при старте.</p>
<p>Также, если вы помещаете тесты в статическую библиотеку, то добавьте <code>/OPT:NOREF</code> в настройки линкера главной программы. Если вы используете графическую среду MSVC++, то зайдите в настройки проекта .exe файла Properties/Configuration Properties/Linker/Optimization и установите опцию References в <code>Keep Unreferenced Data (/OPT:NOREF)</code>. Это не даст линкеру исключить отдельные имена функций, генерируемых вашими тестами, из конечного исполняемого файла.</p>
<p>Есть еще одна проблема. Если вы используете Google Test как статическую библиотеку (как это задано в gtest.vcproj), ваши тесты также должны находиться в статической библиотеке. Если они у вас вынуждено находятся в DLL, вы должны скомпилировать Google Test тоже в форме DLL. Иначе ваши тесты не будут правильно запускаться или запускаться вообще. Из этого можно сделать вывод: для упрощения жизни -- не используйте библиотеки для ваших тестов!</p>
<h2 id="markdown-header-_9">Что дальше?</h2>
<p>Поздравляем! Вы освоили основы Google Test. Вы можете начать писать и запускать тесты c Google Test, посмотреть <a data-is-external-link="true" href="https://github.com/google/googletest/blob/master/googletest/docs/Samples.md" rel="nofollow">примеры</a>, или продолжить читать <a data-is-external-link="true" href="https://github.com/google/googletest/blob/master/googletest/docs/AdvancedGuide.md" rel="nofollow">Advanced Guide</a>, где описано множество других полезных возможностей Google Test.</p>
<h2 id="markdown-header-_10">Ограничения</h2>
<p>Google Test разработана быть безопасной для многопоточного выполнения. Однако пока у нас недостаточно времени для реализации механизмов синхронизации для различных платформ, поэтому пока <em>небезопасно</em> использовать утверждения Google Test параллельно в двух потоках. Так как в большинстве тестов утверждения, как правило, проверяются в главном потоке, обычно это не составляет проблемы. При желании вы можете самостоятельно разработать примитивы синхронизации в <code>gtest-port.h</code>.</p>
  </div>


        </div>
        
      </div>
    </div>
  </div>
  
  <div data-module="source/set-changeset" data-hash="1c98dd1fce864a83aff8f0f5dedd1b804fa3847d"></div>



  
    
    
    
  
  

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
  data-https-url="https://bitbucket.org/sonnayasomnambula/googletestprimerrussian"
  data-ssh-url="ssh://hg@bitbucket.org/sonnayasomnambula/googletestprimerrussian">

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
    <input placeholder="Filter branches" class="filter-box" autosave="branch-dropdown-18049854" type="text">
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
                  <a class="pjax-trigger filter-item-link" href="/sonnayasomnambula/googletestprimerrussian/src/[[changeset]]/README.md?at=[[safeName]]"
                     title="[[name]]">
                    [[name]] ([[shortChangeset]])
                  </a>
                </li>
              [[/heads]]
            [[/hasMultipleHeads]]
            [[^hasMultipleHeads]]
              <li class="comprev filter-item">
                <a class="pjax-trigger filter-item-link" href="/sonnayasomnambula/googletestprimerrussian/src/[[changeset]]/README.md?at=[[safeName]]" title="[[name]]">
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
            <a class="pjax-trigger filter-item-link" href="/sonnayasomnambula/googletestprimerrussian/src/[[changeset]]/README.md?at=[[safeName]]" title="[[name]]">
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
        

<a href="/sonnayasomnambula/googletestprimerrussian/src/[[raw_node]]/[[path]]?at=default"
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
  window.__initial_state__ = {"section": {"repository": {"connectActions": [], "cloneProtocol": "https", "currentRepository": {"scm": "hg", "website": "", "name": "GoogleTestPrimerRussian", "language": "markdown", "description": "", "links": {"clone": [{"href": "https://bitbucket.org/sonnayasomnambula/googletestprimerrussian", "name": "https"}, {"href": "ssh://hg@bitbucket.org/sonnayasomnambula/googletestprimerrussian", "name": "ssh"}], "self": {"href": "https://bitbucket.org/!api/2.0/repositories/sonnayasomnambula/googletestprimerrussian"}, "html": {"href": "https://bitbucket.org/sonnayasomnambula/googletestprimerrussian"}, "avatar": {"href": "https://bytebucket.org/ravatar/%7Be08d5056-1536-4fab-b412-3de6c11f0c69%7D?ts=markdown"}}, "mainbranch": {"name": "default"}, "full_name": "sonnayasomnambula/googletestprimerrussian", "owner": {"username": "sonnayasomnambula", "website": "", "display_name": "Serge Glazomitsky", "account_id": "557058:ff1042ff-d3f0-4c75-973b-dd42e546fe53", "links": {"self": {"href": "https://bitbucket.org/!api/2.0/users/sonnayasomnambula"}, "html": {"href": "https://bitbucket.org/sonnayasomnambula/"}, "avatar": {"href": "https://bitbucket.org/account/sonnayasomnambula/avatar/32/"}}, "created_on": "2014-10-10T16:45:31.470162+00:00", "is_staff": false, "location": null, "type": "user", "uuid": "{a333feef-d86c-4d07-b6c3-add583321656}"}, "type": "repository", "slug": "googletestprimerrussian", "is_private": false, "uuid": "{e08d5056-1536-4fab-b412-3de6c11f0c69}"}, "menuItems": [{"analytics_label": "repository.overview", "is_client_link": false, "icon_class": "icon-overview", "badge_label": null, "weight": 100, "url": "/sonnayasomnambula/googletestprimerrussian/overview", "tab_name": "overview", "can_display": true, "label": "Overview", "type": "menu_item", "anchor": true, "analytics_payload": {}, "matching_url_prefixes": [], "target": "_self", "id": "repo-overview-link", "icon": "icon-overview"}, {"analytics_label": "repository.source", "is_client_link": false, "icon_class": "icon-source", "badge_label": null, "weight": 200, "url": "/sonnayasomnambula/googletestprimerrussian/src", "tab_name": "source", "can_display": true, "label": "Source", "type": "menu_item", "anchor": true, "analytics_payload": {}, "matching_url_prefixes": ["/diff", "/history-node"], "target": "_self", "id": "repo-source-link", "icon": "icon-source"}, {"analytics_label": "repository.commits", "is_client_link": false, "icon_class": "icon-commits", "badge_label": null, "weight": 300, "url": "/sonnayasomnambula/googletestprimerrussian/commits/", "tab_name": "commits", "can_display": true, "label": "Commits", "type": "menu_item", "anchor": true, "analytics_payload": {}, "matching_url_prefixes": [], "target": "_self", "id": "repo-commits-link", "icon": "icon-commits"}, {"analytics_label": "repository.branches", "is_client_link": false, "icon_class": "icon-branches", "badge_label": null, "weight": 400, "url": "/sonnayasomnambula/googletestprimerrussian/branches/", "tab_name": "branches", "can_display": true, "label": "Branches", "type": "menu_item", "anchor": true, "analytics_payload": {}, "matching_url_prefixes": [], "target": "_self", "id": "repo-branches-link", "icon": "icon-branches"}, {"analytics_label": "repository.pullrequests", "is_client_link": false, "icon_class": "icon-pull-requests", "badge_label": null, "weight": 500, "url": "/sonnayasomnambula/googletestprimerrussian/pull-requests/", "tab_name": "pullrequests", "can_display": true, "label": "Pull requests", "type": "menu_item", "anchor": true, "analytics_payload": {}, "matching_url_prefixes": [], "target": "_self", "id": "repo-pullrequests-link", "icon": "icon-pull-requests"}, {"analytics_label": "user.addon", "is_client_link": false, "icon_class": "aui-iconfont-build", "badge_label": null, "weight": 550, "url": "/sonnayasomnambula/googletestprimerrussian/addon/pipelines/home", "tab_name": "repopage-j7qe94-add-on-link", "can_display": true, "label": "Pipelines", "icon_url": null, "anchor": true, "analytics_payload": {}, "matching_url_prefixes": [], "type": "connect_menu_item", "id": "repopage-j7qe94-add-on-link", "target": "_self"}, {"analytics_label": "repository.downloads", "is_client_link": false, "icon_class": "icon-downloads", "badge_label": null, "weight": 800, "url": "/sonnayasomnambula/googletestprimerrussian/downloads/", "tab_name": "downloads", "can_display": true, "label": "Downloads", "type": "menu_item", "anchor": true, "analytics_payload": {}, "matching_url_prefixes": [], "target": "_self", "id": "repo-downloads-link", "icon": "icon-downloads"}], "bitbucketActions": [{"analytics_label": "repository.clone", "is_client_link": false, "icon_class": "icon-clone", "badge_label": null, "weight": 100, "url": "#clone", "tab_name": "clone", "can_display": true, "label": "<strong>Clone<\/strong> this repository", "type": "menu_item", "anchor": true, "analytics_payload": {}, "matching_url_prefixes": [], "target": "_self", "id": "repo-clone-button", "icon": "icon-clone"}, {"analytics_label": "repository.compare", "is_client_link": false, "icon_class": "aui-icon-small aui-iconfont-devtools-compare", "badge_label": null, "weight": 400, "url": "/sonnayasomnambula/googletestprimerrussian/branches/compare", "tab_name": "compare", "can_display": true, "label": "<strong>Compare<\/strong> branches or tags", "type": "menu_item", "anchor": true, "analytics_payload": {}, "matching_url_prefixes": [], "target": "_self", "id": "repo-compare-link", "icon": "aui-icon-small aui-iconfont-devtools-compare"}, {"analytics_label": "repository.fork", "is_client_link": false, "icon_class": "icon-fork", "badge_label": null, "weight": 500, "url": "/sonnayasomnambula/googletestprimerrussian/fork", "tab_name": "fork", "can_display": true, "label": "<strong>Fork<\/strong> this repository", "type": "menu_item", "anchor": true, "analytics_payload": {}, "matching_url_prefixes": [], "target": "_self", "id": "repo-fork-link", "icon": "icon-fork"}], "activeMenuItem": "source"}}, "global": {"needs_marketing_consent": false, "features": {"source-browser-file-filter": true, "cache-ref-adverts": true, "exp-share-to-invite-variation": false, "clone-in-xcode": true, "gdpr-marketing-consent": true, "connect-v5": true, "search-syntax-highlighting": true, "mobile-nav": true, "deployments": true, "fe_word_diff": true, "trello-boards": true, "use-moneybucket": true, "default-merge-strategy": true, "app-passwords": true, "nav-add-file": false, "src-lastmod-for-dirs": true, "lfs_post_beta": true, "analytics_push_introspection": true, "allow-pullrequest-live-reviewers": true, "bitbucket-chats-integration": true}, "locale": "en", "geoip_country": null, "targetFeatures": {"new-code-review-experiment": false, "show-guidance-message": true, "search-satisfaction": true, "bitbucket-chats-integration": true, "source-browser-file-filter": true, "cache-ref-adverts": true, "mobile-nav": true, "deployments": true, "fe_word_diff": true, "clonebundles": true, "use-moneybucket": true, "pride-logo": false, "default-merge-strategy": true, "analytics_push_introspection": true, "diff-api-renames": false, "clone-in-xcode": true, "gdpr-marketing-consent": true, "connect-v5": true, "trello-boards": true, "atlassian-editor": true, "src-lastmod-for-dirs": true, "new-source-browser": true, "exp-new-user-survey": true, "evolution": false, "search-syntax-highlighting": true, "app-passwords": true, "lfs_post_beta": true, "allow-pullrequest-live-reviewers": true}, "isFocusedTask": false, "targetUser": {"username": "sonnayasomnambula", "website": "", "display_name": "Serge Glazomitsky", "account_id": "557058:ff1042ff-d3f0-4c75-973b-dd42e546fe53", "links": {"self": {"href": "https://bitbucket.org/!api/2.0/users/sonnayasomnambula"}, "html": {"href": "https://bitbucket.org/sonnayasomnambula/"}, "avatar": {"href": "https://bitbucket.org/account/sonnayasomnambula/avatar/32/"}}, "created_on": "2014-10-10T16:45:31.470162+00:00", "is_staff": false, "location": null, "type": "user", "uuid": "{a333feef-d86c-4d07-b6c3-add583321656}"}, "flags": [], "isNavigationOpen": true, "path": "/sonnayasomnambula/googletestprimerrussian/src/1c98dd1fce864a83aff8f0f5dedd1b804fa3847d/README.md", "focusedTaskBackButtonUrl": "https://bitbucket.org/sonnayasomnambula/googletestprimerrussian/src"}};
  window.__settings__ = {"MARKETPLACE_TERMS_OF_USE_URL": null, "JIRA_ISSUE_COLLECTORS": {"source-browser": {"url": "https://bitbucketfeedback.atlassian.net/s/d41d8cd98f00b204e9800998ecf8427e-T/-tqnsjm/b/20/a44af77267a987a660377e5c46e0fb64/_/download/batch/com.atlassian.jira.collector.plugin.jira-issue-collector-plugin:issuecollector/com.atlassian.jira.collector.plugin.jira-issue-collector-plugin:issuecollector.js?locale=en-US&collectorId=c19c2ff6", "id": "c19c2ff6"}, "code-review": {"url": "https://bitbucketfeedback.atlassian.net/s/d41d8cd98f00b204e9800998ecf8427e-T/-4bqv2z/b/20/a44af77267a987a660377e5c46e0fb64/_/download/batch/com.atlassian.jira.collector.plugin.jira-issue-collector-plugin:issuecollector/com.atlassian.jira.collector.plugin.jira-issue-collector-plugin:issuecollector.js?locale=en-US&collectorId=bb066400", "id": "bb066400"}}, "CANON_URL": "https://bitbucket.org", "CONSENT_HUB_FRONTEND_BASE_URL": "https://preferences.atlassian.com", "API_CANON_URL": "https://api.bitbucket.org", "SOCIAL_AUTH_ATLASSIANID_LOGOUT_URL": "https://id.atlassian.com/logout"};
  window.__webpack_nonce__ = '';
</script>

<script src="https://d301sr5gafysq2.cloudfront.net/d1f637a9968a/jsi18n/en/djangojs.js" nonce=""></script>

  <script src="https://d301sr5gafysq2.cloudfront.net/d1f637a9968a/dist/webpack/locales/en.js" nonce=""></script>

<script src="https://d301sr5gafysq2.cloudfront.net/d1f637a9968a/dist/webpack/vendor.js" nonce=""></script>
<script src="https://d301sr5gafysq2.cloudfront.net/d1f637a9968a/dist/webpack/app.js" nonce=""></script>


<script async src="https://www.google-analytics.com/analytics.js" nonce=""></script>

<script nonce="" type="text/javascript">window.NREUM||(NREUM={});NREUM.info={"beacon":"bam.nr-data.net","queueTime":0,"licenseKey":"a2cef8c3d3","agent":"","transactionName":"Z11RZxdWW0cEVkYLDV4XdUYLVEFdClsdAAtEWkZQDlJBGgRFQhFMQl1DXFcZQ10AQkFYBFlUVlEXWEJHAA==","applicationID":"1841284","errorBeacon":"bam.nr-data.net","applicationTime":607}</script>
</body>
</html>