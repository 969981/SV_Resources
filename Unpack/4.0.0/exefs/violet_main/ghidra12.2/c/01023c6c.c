/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01023c6c; name: FUN_01023c6c
 */


void FUN_01023c6c(undefined8 *param_1,long param_2,long param_3,long *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  puVar3 = PTR_LAB_047d3900;
  if (param_3 != param_2) {
    lVar6 = *param_4;
    do {
      uVar7 = *param_1;
      if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(puVar3,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar5 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar5 == 0) {
        uVar7 = *(undefined8 *)(param_3 + -0x20);
        uVar1 = *(undefined8 *)(param_3 + -0x18);
        uVar2 = *(undefined8 *)(param_3 + -8);
        *(undefined8 *)(lVar6 + -0x10) = *(undefined8 *)(param_3 + -0x10);
        *(undefined8 *)(lVar6 + -8) = uVar2;
        *(undefined8 *)(lVar6 + -0x20) = uVar7;
        *(undefined8 *)(lVar6 + -0x18) = uVar1;
      }
      else {
        if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined8 *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = uVar7;
        *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
        uVar7 = *(undefined8 *)(param_3 + -0x20);
        uVar1 = *(undefined8 *)(param_3 + -0x18);
        uVar2 = *(undefined8 *)(param_3 + -8);
        *(undefined8 *)(lVar6 + -0x10) = *(undefined8 *)(param_3 + -0x10);
        *(undefined8 *)(lVar6 + -8) = uVar2;
        *(undefined8 *)(lVar6 + -0x20) = uVar7;
        *(undefined8 *)(lVar6 + -0x18) = uVar1;
        *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
      }
      param_3 = param_3 + -0x20;
      lVar6 = *param_4 + -0x20;
      *param_4 = lVar6;
    } while (param_2 != param_3);
  }
  return;
}


