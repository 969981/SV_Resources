/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00ff2448; name: FUN_00ff2448
 */


void FUN_00ff2448(undefined8 *param_1,long *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined2 *puVar5;
  
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x10,2);
  if (puVar3 == (undefined8 *)0x0) {
    puVar5 = (undefined2 *)0x0;
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar4 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = param_2;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
    *puVar3 = 0;
    puVar3[1] = 0;
    *param_1 = puVar3;
    param_1[1] = param_2;
    param_1[2] = 0x10;
    param_1[3] = 2;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
    puVar5 = (undefined2 *)*param_1;
  }
  iVar2 = param_3 * 0x41c64e6d + 0x6073;
  iVar1 = iVar2 * 0x41c64e6d + 0x6073;
  *puVar5 = (short)((uint)iVar2 >> 0x10);
  iVar2 = iVar1 * 0x41c64e6d + 0x6073;
  puVar5[1] = (short)((uint)iVar1 >> 0x10);
  iVar1 = iVar2 * 0x41c64e6d + 0x6073;
  puVar5[2] = (short)((uint)iVar2 >> 0x10);
  iVar2 = iVar1 * 0x41c64e6d + 0x6073;
  puVar5[3] = (short)((uint)iVar1 >> 0x10);
  iVar1 = iVar2 * 0x41c64e6d + 0x6073;
  puVar5[4] = (short)((uint)iVar2 >> 0x10);
  iVar2 = iVar1 * 0x41c64e6d + 0x6073;
  puVar5[5] = (short)((uint)iVar1 >> 0x10);
  puVar5[6] = (short)((uint)iVar2 >> 0x10);
  puVar5[7] = (short)((uint)(iVar2 * 0x41c64e6d + 0x6073) >> 0x10);
  return;
}


