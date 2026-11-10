/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 015eb9fc; name: FUN_015eb9fc
 */


void FUN_015eb9fc(undefined8 *param_1,ulong param_2)

{
  bool bVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  
  if (((DAT_0483b210 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_0483b210), iVar2 != 0)) {
    FUN_00100190(&LAB_02a427cc,&DAT_0483b200,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_0483b210);
  }
  DAT_0483b218 = DAT_0483b200;
  plVar5 = (long *)(DAT_0483b200 + 0x30);
  plVar6 = (long *)*plVar5;
  if (plVar6 != (long *)0x0) {
    plVar7 = (long *)plVar6[(ulong)plVar6[4] < param_2];
    plVar3 = plVar5;
    if ((ulong)plVar6[4] >= param_2) {
      plVar3 = plVar6;
    }
    for (; plVar7 != (long *)0x0; plVar7 = (long *)plVar7[(ulong)plVar7[4] < param_2]) {
      if ((ulong)plVar7[4] >= param_2) {
        plVar3 = plVar7;
      }
    }
    if ((plVar3 != plVar5) && ((ulong)plVar3[4] <= param_2)) {
      if (*(long *)(plVar3[5] + 0x28) != 0) {
        if (*(short *)(*(long *)(plVar3[5] + 0x28) + 0x1a) != 0) {
          lVar4 = plVar3[5];
          *param_1 = 0;
          param_1[1] = 0;
          FUN_00ca1a48(param_1,lVar4 + 0x28);
          return;
        }
        plVar6 = (long *)*plVar5;
      }
      if (plVar6 != (long *)0x0) {
        bVar1 = param_2 <= (ulong)plVar6[4];
        plVar3 = plVar5;
        if (bVar1) {
          plVar3 = plVar6;
        }
        while (plVar6 = (long *)plVar6[!bVar1], plVar6 != (long *)0x0) {
          bVar1 = param_2 <= (ulong)plVar6[4];
          if (bVar1) {
            plVar3 = plVar6;
          }
        }
        if ((plVar3 != plVar5) && ((ulong)plVar3[4] <= param_2)) {
          FUN_01484e2c(DAT_0483b200 + 0x28);
        }
      }
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


