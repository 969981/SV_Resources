/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001c6f90; name: FUN_001c6f90
 */


undefined8 FUN_001c6f90(long param_1,long *param_2)

{
  undefined4 *puVar1;
  size_t sVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  char acStack_c0 [128];
  
  lVar4 = *param_2;
  puVar1 = (undefined4 *)FUN_001c6ed8(param_2,*(undefined8 *)(lVar4 + 0x1100));
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)FUN_001ec2f8(0x30);
    if (puVar1 != (undefined4 *)0x0) {
      *(undefined8 *)(puVar1 + 2) = 0;
      *puVar1 = 0;
      FUN_001cb57c(puVar1 + 4,&LAB_001c7630);
      FUN_001c6f48(param_2,acStack_c0);
      uVar5 = *(undefined8 *)(lVar4 + 0x1100);
      sVar2 = strlen(acStack_c0);
      lVar3 = FUN_001c8974(uVar5,acStack_c0,sVar2,puVar1);
      if (lVar3 != 0) goto LAB_001c6fc8;
      FUN_001c70a4(puVar1);
    }
    uVar5 = 0x1b;
  }
  else {
LAB_001c6fc8:
    FUN_001cb588(puVar1 + 4,*(undefined8 *)(puVar1 + 6),param_2,param_2 + 1);
    param_2[0xcc] = (long)puVar1;
    *(long *)(puVar1 + 2) = *(long *)(puVar1 + 2) + 1;
    lVar3 = *(long *)(param_1 + 0x38);
    *(long *)(param_1 + 0x38) = lVar3 + 1;
    param_2[0xc] = lVar3;
    uVar5 = 0;
    *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + 1;
  }
  if (*(long *)(lVar4 + 0xe8) != 0) {
    FUN_001dc2d8(lVar4,5);
  }
  return uVar5;
}


