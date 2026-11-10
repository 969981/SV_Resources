/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d0b714; name: FUN_00d0b714
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00d0b714(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  
  puVar5 = PTR_LAB_047d3900;
  uVar4 = _UNK_03cabe58;
  uVar3 = _DAT_03cabe50;
  uVar2 = _UNK_03caa988;
  uVar1 = _DAT_03caa980;
  lVar7 = *(long *)(param_1 + 8);
  lVar8 = lVar7;
  if (param_2 != 0) {
    lVar8 = lVar7 + param_2 * 0x40;
    puVar10 = (undefined8 *)(lVar7 + 0x20);
    param_2 = param_2 << 6;
    do {
      uVar9 = *(undefined8 *)(param_1 + 0x18);
      if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(puVar5,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar7 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar7 == 0) {
        puVar10[-4] = 0;
        puVar10[-3] = 0;
        puVar10[2] = 0;
        puVar10[3] = 0;
        puVar10[-1] = uVar2;
        puVar10[-2] = uVar1;
        puVar10[1] = uVar4;
        *puVar10 = uVar3;
      }
      else {
        if (0xf < *(ulong *)(lVar7 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined8 *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = uVar9;
        *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
        puVar10[-4] = 0;
        puVar10[-3] = 0;
        puVar10[2] = 0;
        puVar10[3] = 0;
        puVar10[-1] = uVar2;
        puVar10[-2] = uVar1;
        puVar10[1] = uVar4;
        *puVar10 = uVar3;
        *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
      }
      puVar10 = puVar10 + 8;
      param_2 = param_2 + -0x40;
    } while (param_2 != 0);
  }
  *(long *)(param_1 + 8) = lVar8;
  return;
}


