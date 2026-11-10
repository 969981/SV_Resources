/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 024a67ec; name: FUN_024a67ec
 */


void FUN_024a67ec(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 local_58;
  
  puVar4 = (undefined8 *)(param_1 + 0x28);
  uVar5 = *puVar4;
  lVar1 = FUN_024a6a18(param_2,uVar5,puVar4);
  if (*(long *)(lVar1 + 0x30) == *param_3) {
    lVar6 = *(long *)(*(long *)(lVar1 + 0x30) + 8);
    puVar2 = (undefined8 *)FUN_024a6a88(param_2,uVar5,puVar4);
    if (puVar4 == puVar2) {
      lVar3 = param_1;
    }
    else {
      lVar3 = puVar2[6];
    }
    if (lVar6 == lVar3) {
      FUN_024a6b8c(param_1 + 0x20,lVar1);
      (**(code **)(**(long **)(param_1 + 0x30) + 0x18))(*(long **)(param_1 + 0x30),lVar1,0x38,8);
    }
    else {
      local_58 = param_2;
      lVar1 = FUN_024a6af8(param_1 + 0x20,param_2,&local_58);
      *(long *)(lVar1 + 0x30) = lVar6;
    }
  }
  FUN_024a6bf4(param_1,*param_3);
  return;
}


