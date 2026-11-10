/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 026ed6a8; name: FUN_026ed6a8
 */


void FUN_026ed6a8(long param_1,long *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined1 auStack_a0 [104];
  undefined8 local_38;
  
  lVar4 = *(long *)(param_1 + 0x350);
  lVar3 = *(long *)(param_1 + 0x358);
  while (lVar3 != lVar4) {
    plVar1 = (long *)(lVar3 + -8);
    lVar3 = lVar3 + -0x20;
    if ((long *)*plVar1 != (long *)0x0) {
      (**(code **)(*(long *)*plVar1 + 0x20))();
    }
  }
  *(long *)(param_1 + 0x358) = lVar4;
  if ((*param_2 != 0) && (lVar3 = *(long *)(*param_2 + 0x10), lVar3 != 0)) {
    puVar5 = *(undefined8 **)(lVar3 + 0x150);
    puVar2 = *(undefined8 **)(lVar3 + 0x158);
    if (puVar5 != puVar2) {
      local_38 = *puVar5;
      FUN_026ed834(auStack_a0,&local_38);
      if (puVar5 + 1 != puVar2) {
        local_38 = puVar5[1];
        FUN_026ed834(auStack_a0,&local_38);
        if (puVar5 + 2 != puVar2) {
          local_38 = puVar5[2];
          FUN_026ed834(auStack_a0,&local_38);
          if (puVar5 + 3 != puVar2) {
            local_38 = puVar5[3];
            FUN_026ed834(auStack_a0,&local_38);
            for (puVar5 = puVar5 + 4; puVar5 != puVar2; puVar5 = puVar5 + 1) {
              local_38 = *puVar5;
              FUN_026ed834(auStack_a0,&local_38);
            }
          }
        }
      }
    }
    FUN_02ba9ab4(auStack_a0);
  }
  return;
}


