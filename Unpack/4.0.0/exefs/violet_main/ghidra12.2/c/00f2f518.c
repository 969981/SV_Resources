/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f2f518; name: FUN_00f2f518
 */


void FUN_00f2f518(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  
  puVar2 = PTR_DAT_047dd330;
  lVar4 = *(long *)(param_1 + 8);
  lVar5 = lVar4;
  if (param_2 != 0) {
    lVar5 = lVar4 + param_2 * 0x40;
    param_2 = param_2 << 6;
    puVar7 = (undefined8 *)(lVar4 + 8);
    puVar1 = PTR_DAT_047dd330 + 0x10;
    do {
      uVar6 = *(undefined8 *)(param_1 + 0x18);
      if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar4 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar4 == 0) {
        puVar7[5] = 0;
        puVar7[6] = 0;
        puVar7[3] = 0;
        puVar7[4] = 0;
        puVar7[1] = 0;
        puVar7[2] = 0;
        puVar7[-1] = puVar1;
        *puVar7 = 0;
      }
      else {
        if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined8 *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = uVar6;
        *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
        puVar7[5] = 0;
        puVar7[6] = 0;
        puVar7[3] = 0;
        puVar7[4] = 0;
        puVar7[1] = 0;
        puVar7[2] = 0;
        puVar7[-1] = puVar2 + 0x10;
        *puVar7 = 0;
        *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
      }
      param_2 = param_2 + -0x40;
      puVar7 = puVar7 + 8;
    } while (param_2 != 0);
  }
  *(long *)(param_1 + 8) = lVar5;
  return;
}


