/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003e96c0; name: FUN_003e96c0
 */


long FUN_003e96c0(long *param_1,int param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  code *pcVar3;
  undefined8 local_18;
  
  if (param_1 == (long *)0x0) {
    return 0;
  }
  local_18 = param_3;
  if (((*param_1 == 0) || (param_2 != 0xe)) ||
     (pcVar3 = *(code **)(*param_1 + 0x58), pcVar3 == (code *)0x0)) {
    FUN_004806c0(0x20,0x83,0x79,"external/openssl/crypto/bio/bio_lib.c",0x222);
    return -2;
  }
  pcVar1 = (code *)param_1[2];
  if ((code *)param_1[1] == (code *)0x0) {
    if (pcVar1 == (code *)0x0) goto LAB_003e979c;
LAB_003e9760:
    lVar2 = (*pcVar1)(param_1,6,&local_18,0,0xe,0,1,0);
  }
  else {
    if (pcVar1 != (code *)0x0) goto LAB_003e9760;
    lVar2 = (*(code *)param_1[1])(param_1,6,&local_18,0xe,0,1);
  }
  if (lVar2 < 1) {
    return lVar2;
  }
  pcVar3 = *(code **)(*param_1 + 0x58);
LAB_003e979c:
  lVar2 = (*pcVar3)(param_1,0xe,local_18);
  pcVar3 = (code *)param_1[2];
  if ((code *)param_1[1] == (code *)0x0) {
    if (pcVar3 == (code *)0x0) {
      return lVar2;
    }
  }
  else if (pcVar3 == (code *)0x0) {
    lVar2 = (*(code *)param_1[1])(param_1,0x86,&local_18,0xe,0,lVar2);
    return lVar2;
  }
  lVar2 = (*pcVar3)(param_1,0x86,&local_18,0,0xe,0,lVar2,0);
  return lVar2;
}


