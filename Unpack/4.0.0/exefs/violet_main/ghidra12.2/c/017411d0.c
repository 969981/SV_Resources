/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017411d0; name: FUN_017411d0
 */


void FUN_017411d0(undefined1 *param_1,ulong *param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  
  if (((DAT_048404e8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_048404e8), iVar3 != 0)) {
    FUN_00100190(&LAB_02acc060,&DAT_048404d8,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_048404e8);
  }
  lVar1 = DAT_048404d8;
  DAT_048404f0 = DAT_048404d8;
  uVar7 = *param_2;
  plVar5 = (long *)param_2[3];
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  plVar8 = (long *)(lVar1 + 0x38);
  plVar4 = (long *)*plVar8;
  if (plVar4 != (long *)0x0) {
    plVar6 = plVar8;
    do {
      if ((ulong)plVar4[4] >= uVar7) {
        plVar6 = plVar4;
      }
      plVar4 = (long *)plVar4[(ulong)plVar4[4] < uVar7];
    } while (plVar4 != (long *)0x0);
    if ((plVar6 != plVar8) && ((ulong)plVar6[4] <= uVar7)) {
      *param_1 = 0;
      *(long *)(param_1 + 8) = plVar6[8];
      *(long *)(param_1 + 0x10) = plVar6[9];
      *(long *)(param_1 + 0x18) = plVar6[10];
      plVar4 = (long *)plVar6[0xb];
      *(long **)(param_1 + 0x20) = plVar4;
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x18))();
      }
      lVar1 = plVar6[0xd];
      lVar2 = plVar6[0xe];
      *(long *)(param_1 + 0x28) = plVar6[0xc];
      *(long *)(param_1 + 0x30) = lVar1;
      param_1[0x38] = (char)lVar2;
      *param_1 = 1;
      goto LAB_01741264;
    }
  }
  *param_1 = 0;
LAB_01741264:
  if (plVar5 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x017412e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 0x20))(plVar5);
  return;
}


