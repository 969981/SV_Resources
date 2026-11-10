/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e1c554; name: FUN_00e1c554
 */


void FUN_00e1c554(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  
  puVar2 = PTR_DAT_047e31f8;
  plVar6 = *(long **)(param_1 + 8);
  plVar7 = plVar6;
  if (param_2 != 0) {
    plVar7 = plVar6 + param_2 * 0xb;
    param_2 = param_2 * 0x58;
    puVar1 = PTR_DAT_047e31f8 + 0x10;
    do {
      uVar5 = *(undefined8 *)(param_1 + 0x18);
      if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar4 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar4 == 0) {
        plVar6[6] = 0;
        plVar6[7] = 0;
        *(undefined4 *)(plVar6 + 7) = 0;
        plVar6[10] = 0;
        plVar6[4] = 0;
        plVar6[5] = 0;
        plVar6[2] = 0;
        plVar6[3] = 0;
        *plVar6 = (long)puVar1;
        plVar6[1] = 0;
        plVar6[8] = 0;
        plVar6[9] = 0;
      }
      else {
        if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined8 *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = uVar5;
        *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
        plVar6[6] = 0;
        plVar6[7] = 0;
        *(undefined4 *)(plVar6 + 7) = 0;
        plVar6[4] = 0;
        plVar6[5] = 0;
        plVar6[10] = 0;
        plVar6[2] = 0;
        plVar6[3] = 0;
        plVar6[8] = 0;
        plVar6[9] = 0;
        *plVar6 = (long)(puVar2 + 0x10);
        plVar6[1] = 0;
        *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
      }
      plVar6 = plVar6 + 0xb;
      param_2 = param_2 + -0x58;
    } while (param_2 != 0);
  }
  *(long **)(param_1 + 8) = plVar7;
  return;
}


