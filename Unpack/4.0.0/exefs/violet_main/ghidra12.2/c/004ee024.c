/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004ee024; name: FUN_004ee024
 */


void FUN_004ee024(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ushort uVar1;
  long *plVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 *local_28;
  undefined8 uStack_18;
  
  local_38 = param_2;
  uStack_30 = param_3;
  uStack_18 = param_4;
  if (*(ushort *)(param_1 + 8) < 0x101) {
    puVar4 = *(undefined4 **)(param_1 + 0x10);
    local_28 = &uStack_18;
    uVar1 = *(ushort *)(param_1 + 10);
    if ((ulong)uVar1 != 0) {
      puVar5 = puVar4;
      do {
        puVar6 = puVar5 + 8;
        FUN_004ef6a4(&local_38,*puVar5,puVar5 + 2);
        puVar5 = puVar6;
      } while (puVar6 != puVar4 + (ulong)uVar1 * 8);
    }
  }
  else {
    puVar7 = *(undefined8 **)(param_1 + 0x10);
    local_28 = &uStack_18;
    plVar8 = (long *)*puVar7;
    while (plVar8 != puVar7 + 1) {
      FUN_004ef6a4(&local_38,(int)plVar8[4],plVar8 + 5);
      plVar2 = (long *)plVar8[1];
      if ((long *)plVar8[1] == (long *)0x0) {
        plVar2 = plVar8 + 2;
        if (*(long **)*plVar2 == plVar8) {
          plVar8 = (long *)*plVar2;
        }
        else {
          do {
            lVar3 = *plVar2;
            plVar2 = (long *)(lVar3 + 0x10);
            plVar8 = (long *)*plVar2;
          } while (*plVar8 != lVar3);
        }
      }
      else {
        do {
          plVar8 = plVar2;
          plVar2 = (long *)*plVar8;
        } while ((long *)*plVar8 != (long *)0x0);
      }
    }
  }
  return;
}


