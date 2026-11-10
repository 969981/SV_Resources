/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0126845c; name: FUN_0126845c
 */


void FUN_0126845c(undefined8 *param_1,long param_2,long param_3,long *param_4)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_LAB_047d3900;
  if (param_3 != param_2) {
    lVar4 = *param_4;
    do {
      uVar6 = *param_1;
      if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(puVar1,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar3 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar3 == 0) {
        uVar6 = *(undefined8 *)(param_3 + -0x18);
        uVar5 = *(undefined8 *)(param_3 + -8);
        *(undefined8 *)(lVar4 + -0x10) = *(undefined8 *)(param_3 + -0x10);
        *(undefined8 *)(lVar4 + -8) = uVar5;
        *(undefined8 *)(lVar4 + -0x18) = uVar6;
      }
      else {
        if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined8 *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = uVar6;
        *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
        uVar5 = *(undefined8 *)(param_3 + -8);
        uVar6 = *(undefined8 *)(param_3 + -0x10);
        *(undefined8 *)(lVar4 + -0x18) = *(undefined8 *)(param_3 + -0x18);
        *(undefined8 *)(lVar4 + -0x10) = uVar6;
        *(undefined8 *)(lVar4 + -8) = uVar5;
        *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
      }
      param_3 = param_3 + -0x18;
      lVar4 = *param_4 + -0x18;
      *param_4 = lVar4;
    } while (param_2 != param_3);
  }
  return;
}


