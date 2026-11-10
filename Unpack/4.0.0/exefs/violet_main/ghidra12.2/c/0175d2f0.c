/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0175d2f0; name: FUN_0175d2f0
 */


void FUN_0175d2f0(long param_1,long *param_2)

{
  undefined *puVar1;
  byte bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  
  *(long **)(param_1 + 0x10) = param_2;
  *(undefined8 *)(param_1 + 0x20) = 0x58;
  plVar3 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x58,8);
  *(long **)(param_1 + 0x18) = plVar3;
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0175d430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x10) + 0xe8))();
    return;
  }
  plVar3[2] = 0;
  puVar1 = PTR_DAT_047dda10;
  *(undefined2 *)(plVar3 + 3) = 0;
  *plVar3 = (long)(puVar1 + 0x10);
  plVar3[1] = (long)(puVar1 + 0x130);
  plVar7 = param_2 + 1;
  plVar4 = (long *)(**(code **)*plVar7)(plVar7);
  lVar5 = FUN_012e29ac();
  do {
    if (plVar4 == (long *)0x0) {
      plVar4 = (long *)0x0;
LAB_0175d390:
      plVar3[4] = (long)plVar4;
      plVar3[5] = 0xd600000;
      *(undefined4 *)(plVar3 + 6) = 0;
      plVar3[9] = 0;
      *(undefined1 *)(plVar3 + 10) = 0;
      plVar3[7] = 0;
      plVar3[8] = 0;
      uVar6 = FUN_014ecb40();
      if ((uVar6 & 1) == 0) {
        bVar2 = 0;
      }
      else {
        uVar6 = (**(code **)(*param_2 + 0xb8))(param_2);
        if ((uVar6 & 1) == 0) {
          (**(code **)*plVar7)(plVar7);
          bVar2 = FUN_012e2a88();
        }
        else {
          bVar2 = 1;
        }
      }
      *(byte *)(plVar3 + 10) = bVar2 & 1;
      *(long **)(param_1 + 8) = plVar3;
                    /* WARNING: Could not recover jumptable at 0x0175d3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0xe0))(plVar3,"PEHeapType::Main");
      return;
    }
    if (plVar4 == (long *)lVar5) {
      plVar4 = param_2;
      goto LAB_0175d390;
    }
    plVar4 = (long *)*plVar4;
  } while( true );
}


