/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e1c048; name: FUN_00e1c048
 */


void FUN_00e1c048(undefined8 *param_1,long *param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  uVar7 = *param_1;
  if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar5 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar5 != 0) {
    if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = uVar7;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
  }
  *param_2 = (long)(PTR_DAT_047e31c0 + 0x10);
  param_2[1] = *(long *)(param_3 + 8);
  FUN_029c4bf0(param_2 + 2,param_3 + 0x10);
  puVar1 = PTR_DAT_047e3228 + 0x10;
  *(undefined4 *)(param_2 + 9) = *(undefined4 *)(param_3 + 0x48);
  *param_2 = (long)puVar1;
  param_2[0xb] = 0;
  param_2[10] = 0;
  FUN_00c43ef0(param_2 + 10,param_3 + 0x50);
  lVar6 = *(long *)(param_3 + 0x60);
  *(undefined4 *)(param_2 + 0xd) = *(undefined4 *)(param_3 + 0x68);
  param_2[0xc] = lVar6;
  lVar6 = *(long *)(param_3 + 0x70);
  lVar2 = *(long *)(param_3 + 0x78);
  lVar3 = *(long *)(param_3 + 0x88);
  param_2[0x10] = *(long *)(param_3 + 0x80);
  param_2[0x11] = lVar3;
  param_2[0xe] = lVar6;
  param_2[0xf] = lVar2;
  if (lVar5 != 0) {
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
  }
  return;
}


