/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e1cdc4; name: FUN_00e1cdc4
 */


void FUN_00e1cdc4(undefined8 *param_1,long *param_2,long param_3)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  uVar7 = *param_1;
  if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar3 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar3 != 0) {
    if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = uVar7;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  }
  *param_2 = (long)(PTR_DAT_047e31d0 + 0x10);
  memcpy(param_2 + 1,(void *)(param_3 + 8),0x38);
  FUN_029c4b44(param_2 + 8,param_3 + 0x40);
  lVar4 = *(long *)(param_3 + 0xa8);
  *(undefined8 *)(param_3 + 0xa8) = 0;
  param_2[0x15] = lVar4;
  memcpy(param_2 + 0x16,(void *)(param_3 + 0xb0),0x28);
  *(undefined8 *)(param_3 + 0xb0) = 0;
  memcpy(param_2 + 0x1b,(void *)(param_3 + 0xd8),0x28);
  lVar4 = *(long *)(param_3 + 0x100);
  param_2[0x20] = lVar4;
  *(undefined4 *)(param_2 + 0x21) = *(undefined4 *)(param_3 + 0x108);
  if (lVar4 != 0) {
    uVar6 = param_2[0x16];
    uVar5 = *(ulong *)(param_2[0x1b] + 8);
    if ((uVar6 & uVar6 - 1) == 0) {
      uVar5 = uVar6 - 1 & uVar5;
    }
    else if (uVar6 <= uVar5) {
      uVar1 = 0;
      if (uVar6 != 0) {
        uVar1 = uVar5 / uVar6;
      }
      uVar5 = uVar5 - uVar1 * uVar6;
    }
    *(long **)(param_2[0x15] + uVar5 * 8) = param_2 + 0x1b;
    *(undefined8 *)(param_3 + 0xd8) = 0;
    *(undefined8 *)(param_3 + 0x100) = 0;
  }
  param_2[0x22] = *(long *)(param_3 + 0x110);
  if (lVar3 != 0) {
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  }
  return;
}


