/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01a30d10; name: FUN_01a30d10
 */


void FUN_01a30d10(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  char *__s1;
  long lVar5;
  
  __s1 = *(char **)(param_3 + 0x30);
  iVar2 = strcmp(__s1,PTR_s_IrradianceVolume_047e15a0);
  if (iVar2 == 0) {
    lVar4 = *(long *)(param_1 + 0x10);
    lVar1 = lVar4 + 0xa8;
    lVar5 = *(long *)(lVar4 + 0xb0);
    if (lVar1 != lVar5) {
      do {
        uVar3 = (**(code **)(*(long *)(lVar4 + 0xa0) + 0x10))
                          ((long *)(lVar4 + 0xa0),param_2,lVar5 + 0x10);
        if ((uVar3 & 1) != 0) {
          FUN_00d8a438(lVar1,lVar5);
          return;
        }
        lVar5 = *(long *)(lVar5 + 8);
      } while (lVar1 != lVar5);
    }
  }
  else {
    iVar2 = strcmp(__s1,PTR_s_SpecularProbe_047e1598);
    if (iVar2 == 0) {
      FUN_01a30ddc(*(long *)(param_1 + 0x10) + 0xe8,param_2);
      return;
    }
  }
  return;
}


