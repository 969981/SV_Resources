/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e1561c; name: FUN_00e1561c
 */


void FUN_00e1561c(undefined8 *param_1,long param_2,int param_3)

{
  short sVar1;
  undefined *puVar2;
  short sVar3;
  int iVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  
  plVar7 = *(long **)(param_2 + 0x30);
  plVar5 = *(long **)(param_2 + 0x38);
  if (plVar7 != plVar5) {
    do {
      sVar1 = *(short *)((long)plVar7 + 10);
      sVar3 = (**(code **)(*(long *)(*(long *)(*plVar7 + 0x30) + 0x30) + 0x10))();
      if ((int)(short)param_3 < (int)sVar1 + (int)sVar3) {
        plVar5 = (long *)(*(long *)(*plVar7 + 0x30) + 0x30);
        puVar6 = (undefined8 *)
                 (**(code **)(*plVar5 + 0x20))
                           (plVar5,param_3 - (uint)*(ushort *)((long)plVar7 + 10));
        uVar8 = puVar6[1];
        *param_1 = *puVar6;
        param_1[1] = uVar8;
        plVar7 = (long *)puVar6[3];
        param_1[2] = puVar6[2];
        goto LAB_00e1569c;
      }
      plVar7 = plVar7 + 2;
    } while (plVar5 != plVar7);
  }
  if (((*PTR_DAT_047d3e28 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar4 != 0))
  {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  puVar2 = PTR_DAT_047d3e30;
  uVar8 = *(undefined8 *)(PTR_DAT_047d3e30 + 8);
  *param_1 = *(undefined8 *)PTR_DAT_047d3e30;
  param_1[1] = uVar8;
  plVar7 = *(long **)(puVar2 + 0x18);
  param_1[2] = *(undefined8 *)(puVar2 + 0x10);
LAB_00e1569c:
  param_1[3] = plVar7;
  if (plVar7 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00e156d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar7 + 0x18))();
  return;
}


