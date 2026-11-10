/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 011c7e30; name: FUN_011c7e30
 */


void FUN_011c7e30(long param_1,undefined8 param_2,int param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  
  lVar1 = FUN_0113ca5c(*(undefined8 *)(param_1 + 0x170));
  if (lVar1 == 0) {
    return;
  }
  lVar2 = *(long *)(param_1 + 0x178);
  plVar3 = (long *)(**(code **)(**(long **)(lVar2 + 0x38) + 0x70))
                             (*(long **)(lVar2 + 0x38),
                              &DAT_00003010 + *(long *)(*(long *)(lVar2 + 0x30) + 0x30),
                              *(undefined8 *)(param_4 + 8));
  lVar4 = (**(code **)(*plVar3 + 0x38))();
  plVar5 = plVar3;
  if (lVar4 != 0) {
    plVar5 = (long *)FUN_011c7f68(*(undefined8 *)(lVar2 + 0x38),*(undefined8 *)(param_4 + 8));
    plVar5[1] = -1;
    uVar6 = (**(code **)(*plVar3 + 0x38))(plVar3);
    FUN_011c7f74(plVar5 + 1,uVar6,lVar2);
  }
  lVar1 = FUN_0113ca0c(lVar1);
  *(long **)(*(long *)(lVar1 + 0x18) + (long)param_3 * 0x10 + 8) = plVar5;
                    /* WARNING: Could not recover jumptable at 0x011c7f20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(lVar2 + 0x38) + 0x18))(*(long **)(lVar2 + 0x38),FUN_011c7f74,lVar2);
  return;
}


