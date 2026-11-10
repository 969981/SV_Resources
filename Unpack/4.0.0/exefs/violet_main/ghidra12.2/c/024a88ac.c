/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 024a88ac; name: FUN_024a88ac
 */


void FUN_024a88ac(long param_1,undefined8 param_2,long *param_3)

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
  lVar1 = FUN_024a89a0(param_2,uVar5,puVar4);
  if (*(long *)(lVar1 + 0x30) == *param_3) {
    lVar6 = *(long *)(*(long *)(lVar1 + 0x30) + 8);
    puVar2 = (undefined8 *)FUN_024a8a10(param_2,uVar5,puVar4);
    if (puVar4 == puVar2) {
      lVar3 = param_1;
    }
    else {
      lVar3 = puVar2[6];
    }
    if (lVar6 == lVar3) {
      FUN_024a8b14(param_1 + 0x20,lVar1);
      (**(code **)(**(long **)(param_1 + 0x30) + 0x18))(*(long **)(param_1 + 0x30),lVar1,0x38,8);
    }
    else {
      local_58 = param_2;
      lVar1 = FUN_024a8a80(param_1 + 0x20,param_2,&local_58);
      *(long *)(lVar1 + 0x30) = lVar6;
    }
  }
  FUN_024a8b7c(param_1,*param_3);
  return;
}


