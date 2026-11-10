/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0274c888; name: FUN_0274c888
 */


void FUN_0274c888(undefined8 *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  *param_1 = &PTR_FUN_045dacb0;
  param_1[4] = &PTR_LAB_045dad78;
  param_1[6] = &PTR_LAB_045dada8;
  (**(code **)PTR_DAT_047e1968)(param_1 + 0x2b);
  lVar5 = param_1[0x27];
  param_1[0x27] = 0;
  if (lVar5 != 0) {
    plVar1 = (long *)param_1[0x28];
    uVar2 = param_1[0x29];
    uVar6 = param_1[0x2a];
    uVar3 = (**(code **)(*plVar1 + 0xf8))(plVar1);
    if ((uVar3 & 1) != 0) {
      lVar4 = FUN_00c4e600();
      if (0 < *(int *)(lVar4 + 0x12c8)) {
        FUN_00c48fe8(plVar1,lVar5,uVar2,uVar6);
        goto LAB_0274c8dc;
      }
    }
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar5,uVar2,uVar6);
  }
LAB_0274c8dc:
  *param_1 = &PTR_LAB_045dae00;
  param_1[4] = &PTR_LAB_045daec8;
  param_1[6] = &PTR_LAB_045daef8;
  FUN_0274c974(param_1 + 8);
  return;
}


