/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 027852ac; name: FUN_027852ac
 */


void FUN_027852ac(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 auStack_50 [8];
  long local_48;
  
  uVar2 = param_1[5];
  if (uVar2 < (ulong)param_1[6]) {
    lVar7 = param_1[4];
    uVar6 = *param_1;
    if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar4 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar4 != 0) {
      if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = uVar6;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
    }
    uVar6 = *param_2;
    puVar1 = (undefined8 *)(lVar7 + uVar2 * 0x20);
    *param_2 = 0;
    *puVar1 = uVar6;
    uVar6 = param_2[1];
    uVar5 = param_2[3];
    puVar1[2] = param_2[2];
    puVar1[3] = uVar5;
    puVar1[1] = uVar6;
    if (lVar4 != 0) {
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
    }
    param_1[5] = param_1[5] + 1;
  }
  else {
    local_48 = param_1[4] + uVar2 * 0x20;
    FUN_02785f48(auStack_50,param_1,&local_48,param_2);
  }
  return;
}


