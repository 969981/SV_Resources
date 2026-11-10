/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f0f2cc; name: FUN_01f0f2cc
 */


void FUN_01f0f2cc(undefined1 *param_1,long param_2)

{
  char *pcVar1;
  undefined1 uVar2;
  char *pcVar3;
  char cVar4;
  long lVar5;
  
  if (*(long **)(param_2 + 8) != (long *)0x0) {
    pcVar1 = (char *)(**(code **)(**(long **)(param_2 + 8) + 0x10))();
    lVar5 = 0;
    pcVar3 = 
    "gflnet::env::CheckNSORequest::ResultCanceled>::n() [T = gflnet::env::CheckNSORequest::ResultCanceled]"
    ;
    do {
      if ("static const char *boost::detail::ctti<gflnet::env::CheckNSORequest::ResultCanceled>::n() [T = gflnet::env::CheckNSORequest::ResultCanceled]"
          [lVar5 + 0x27] == 'T') {
        if (lVar5 == 0x65) break;
        if ("static const char *boost::detail::ctti<gflnet::env::CheckNSORequest::ResultCanceled>::n() [T = gflnet::env::CheckNSORequest::ResultCanceled]"
            [lVar5 + 0x28] == ' ') {
          if (lVar5 == 100) break;
          if ("static const char *boost::detail::ctti<gflnet::env::CheckNSORequest::ResultCanceled>::n() [T = gflnet::env::CheckNSORequest::ResultCanceled]"
              [lVar5 + 0x29] == '=') {
            if (lVar5 == 99) break;
            if ("static const char *boost::detail::ctti<gflnet::env::CheckNSORequest::ResultCanceled>::n() [T = gflnet::env::CheckNSORequest::ResultCanceled]"
                [lVar5 + 0x2a] == ' ') {
              if (lVar5 == 0x66) {
                pcVar3 = 
                "gflnet::env::CheckNSORequest::ResultCanceled>::n() [T = gflnet::env::CheckNSORequest::ResultCanceled]"
                ;
              }
              else {
                pcVar3 = "static const char *boost::detail::ctti<gflnet::env::CheckNSORequest::ResultCanceled>::n() [T = gflnet::env::CheckNSORequest::ResultCanceled]"
                         + lVar5 + 0x2b;
              }
              break;
            }
          }
        }
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 != 0x66);
    cVar4 = *pcVar1;
    if (cVar4 != '\0') {
      do {
        pcVar1 = pcVar1 + 1;
        if (*pcVar3 != cVar4) break;
        cVar4 = *pcVar1;
        pcVar3 = pcVar3 + 1;
      } while (cVar4 != '\0');
    }
    if (*pcVar3 == cVar4) {
      FUN_01f0f680(param_2 + 8);
      uVar2 = 1;
      goto LAB_01f0f3a4;
    }
  }
  uVar2 = 0;
LAB_01f0f3a4:
  *param_1 = uVar2;
  return;
}


