/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018a841c; name: FUN_018a841c
 */


void FUN_018a841c(undefined8 *param_1,long param_2,long param_3,long *param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  
  puVar2 = PTR_LAB_047d3900;
  if (param_3 != param_2) {
    lVar6 = *param_4;
    do {
      uVar7 = *param_1;
      if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(puVar2,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar4 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar4 != 0) {
        if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined8 *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = uVar7;
        *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
      }
      uVar7 = *(undefined8 *)(param_3 + -0x20);
      *(undefined8 *)(param_3 + -0x20) = 0;
      *(undefined8 *)(lVar6 + -0x20) = uVar7;
      uVar7 = *(undefined8 *)(param_3 + -0x18);
      puVar1 = (undefined8 *)(param_3 + -0x10);
      uVar5 = *(undefined8 *)(param_3 + -8);
      param_3 = param_3 + -0x20;
      *(undefined8 *)(lVar6 + -0x10) = *puVar1;
      *(undefined8 *)(lVar6 + -8) = uVar5;
      *(undefined8 *)(lVar6 + -0x18) = uVar7;
      if (lVar4 != 0) {
        *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
      }
      lVar6 = *param_4 + -0x20;
      *param_4 = lVar6;
    } while (param_2 != param_3);
  }
  return;
}


