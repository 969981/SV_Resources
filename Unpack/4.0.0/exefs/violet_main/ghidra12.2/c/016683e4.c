/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 016683e4; name: FUN_016683e4
 */


void FUN_016683e4(undefined8 *param_1,long param_2,long param_3,long *param_4)

{
  undefined1 uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  if (param_3 != param_2) {
    lVar5 = *param_4;
    do {
      uVar4 = *param_1;
      if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar3 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar3 == 0) {
        uVar1 = *(undefined1 *)(param_3 + -0x18);
        *(undefined8 *)(lVar5 + -0x10) = 0;
        *(undefined8 *)(lVar5 + -8) = 0;
        *(undefined1 *)(lVar5 + -0x18) = uVar1;
        FUN_00d0a34c((undefined8 *)(lVar5 + -0x10),param_3 + -0x10);
      }
      else {
        if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined8 *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = uVar4;
        *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
        uVar1 = *(undefined1 *)(param_3 + -0x18);
        *(undefined8 *)(lVar5 + -0x10) = 0;
        *(undefined8 *)(lVar5 + -8) = 0;
        *(undefined1 *)(lVar5 + -0x18) = uVar1;
        FUN_00d0a34c((undefined8 *)(lVar5 + -0x10),param_3 + -0x10);
        *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
      }
      param_3 = param_3 + -0x18;
      lVar5 = *param_4 + -0x18;
      *param_4 = lVar5;
    } while (param_2 != param_3);
  }
  return;
}


