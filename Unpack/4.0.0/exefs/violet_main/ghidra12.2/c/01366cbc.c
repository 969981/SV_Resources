/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01366cbc; name: FUN_01366cbc
 */


void FUN_01366cbc(long param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  puVar3 = *(undefined8 **)(param_1 + 8);
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  if (((DAT_04865a38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04865a38), iVar1 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar2 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar2 != 0) {
    if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = uVar4;
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
  }
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  uVar4 = *param_2;
  *(undefined4 *)(puVar3 + 5) = *(undefined4 *)(param_2 + 1);
  puVar3[4] = uVar4;
  puVar3[7] = 0;
  puVar3[6] = 0;
  FUN_01365a38(puVar3 + 6,param_2 + 2);
  puVar3[8] = param_2[4];
  uVar4 = param_2[5];
  param_2[5] = 0;
  puVar3[9] = uVar4;
  *puVar3 = &LAB_028fcec8;
  puVar3[1] = &LAB_028fcecc;
  puVar3[2] = &LAB_028fd03c;
  puVar3[3] = &LAB_028fd130;
  puVar3[0x10] = param_2[6];
  if (lVar2 != 0) {
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  }
  *(undefined8 **)(param_1 + 8) = puVar3 + 0x12;
  return;
}


