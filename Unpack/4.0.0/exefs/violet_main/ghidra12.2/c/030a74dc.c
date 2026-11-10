/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030a74dc; name: FUN_030a74dc
 */


void FUN_030a74dc(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  
  iVar1 = *(int *)(param_1 + 0x40);
  if (0 < iVar1) {
    lVar3 = 0;
    lVar4 = 0;
    do {
      lVar2 = *(long *)(*(long *)(param_1 + 0x38) + lVar3);
      if ((lVar2 != 0) &&
         ((*(int *)(*(long *)(lVar2 + 0x20) + 0x164) != 0 ||
          (*(int *)(*(long *)(lVar2 + 0x20) + 0x160) != 0)))) {
        local_44 = 0;
        local_4c = 0x7fffffff;
        uStack_48 = 0;
        FUN_030a5250(lVar2,param_1,&local_44,&uStack_48,&local_4c);
        local_44 = 0;
        local_4c = 0x7fffffff;
        uStack_48 = 0;
        FUN_030a5864(lVar2,param_1,&local_44,&uStack_48,&local_4c,param_2);
        local_44 = 0x7fffffff;
        FUN_030a64fc(lVar2,&local_44);
        iVar1 = *(int *)(param_1 + 0x40);
      }
      lVar4 = lVar4 + 1;
      lVar3 = lVar3 + 0x100;
    } while (lVar4 < iVar1);
  }
  return;
}


