/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e255b0; name: FUN_01e255b0
 */


void FUN_01e255b0(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  
  if (*(char *)(param_1 + 1) == '\0') {
    if (param_2 == 0) {
      return;
    }
  }
  else {
    puVar3 = *(undefined8 **)(param_2 + 0x48);
    if (puVar3 != (undefined8 *)0x0) {
      plVar4 = (long *)*puVar3;
      FUN_00ff9cb8(puVar3 + 3);
      plVar5 = *(long **)(param_2 + 0x50);
      uVar1 = (**(code **)(*plVar5 + 0xf8))(plVar5);
      if (((uVar1 & 1) == 0) || (lVar2 = FUN_00c4e600(), *(int *)(lVar2 + 0x12c8) < 1)) {
        (**(code **)(*plVar5 + 0x18))(plVar5,puVar3,0x58,8);
      }
      else {
        FUN_00c48fe8(plVar5,puVar3,0x58,8);
      }
      if (plVar4 != (long *)0x0) {
        plVar5 = (long *)*plVar4;
        FUN_00ff9cb8(plVar4 + 3);
        plVar6 = *(long **)(param_2 + 0x50);
        uVar1 = (**(code **)(*plVar6 + 0xf8))(plVar6);
        if (((uVar1 & 1) == 0) || (lVar2 = FUN_00c4e600(), *(int *)(lVar2 + 0x12c8) < 1)) {
          (**(code **)(*plVar6 + 0x18))(plVar6,plVar4,0x58,8);
        }
        else {
          FUN_00c48fe8(plVar6,plVar4,0x58,8);
        }
        while (plVar5 != (long *)0x0) {
          plVar6 = (long *)*plVar5;
          FUN_00ff9cb8(plVar5 + 3);
          plVar4 = *(long **)(param_2 + 0x50);
          uVar1 = (**(code **)(*plVar4 + 0xf8))(plVar4);
          if (((uVar1 & 1) == 0) || (lVar2 = FUN_00c4e600(), *(int *)(lVar2 + 0x12c8) < 1)) {
            (**(code **)(*plVar4 + 0x18))(plVar4,plVar5,0x58,8);
            plVar5 = plVar6;
          }
          else {
            FUN_00c48fe8(plVar4,plVar5,0x58,8);
            plVar5 = plVar6;
          }
        }
      }
    }
    lVar2 = *(long *)(param_2 + 0x18);
    *(undefined8 *)(param_2 + 0x18) = 0;
    if (lVar2 != 0) {
      FUN_01209968(param_2 + 0x20);
    }
  }
  plVar4 = *(long **)*param_1;
  uVar1 = (**(code **)(*plVar4 + 0xf8))(plVar4);
  if (((uVar1 & 1) == 0) || (lVar2 = FUN_00c4e600(), *(int *)(lVar2 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x01e256bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 0x18))(plVar4,param_2,0x80,8);
    return;
  }
  FUN_00c48fe8(plVar4,param_2,0x80,8);
  return;
}


