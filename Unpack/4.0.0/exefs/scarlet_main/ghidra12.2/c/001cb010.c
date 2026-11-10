/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001cb010; name: FUN_001cb010
 */


undefined8 FUN_001cb010(long *param_1,ulong param_2,long param_3)

{
  long lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  char *pcVar5;
  
  lVar1 = *param_1 + 0x1208;
  if ((param_2 & 1) == 0) {
    lVar1 = *param_1 + 0x11c8;
  }
  iVar3 = thunk_FUN_001e0a34("Digest",param_3,6);
  if (iVar3 == 0) {
    return 0x3d;
  }
  pcVar5 = (char *)(param_3 + 6);
  cVar2 = *pcVar5;
  while ((cVar2 != '\0' && (iVar3 = FUN_001cb268(cVar2), iVar3 != 0))) {
    pcVar5 = pcVar5 + 1;
    cVar2 = *pcVar5;
  }
  uVar4 = FUN_001e9818(pcVar5,lVar1);
  return uVar4;
}


