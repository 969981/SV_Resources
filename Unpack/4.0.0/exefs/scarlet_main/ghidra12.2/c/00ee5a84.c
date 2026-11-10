/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00ee5a84; name: FUN_00ee5a84
 */


void FUN_00ee5a84(undefined8 *param_1,void *param_2,void *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined2 uVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  
  uVar6 = *param_1;
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
    *(undefined8 *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = uVar6;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
  }
  memcpy(param_2,param_3,0x80);
  *(undefined8 *)((long)param_2 + 0x88) = 0;
  *(undefined8 *)((long)param_2 + 0x90) = 0;
  *(undefined8 *)((long)param_2 + 0x80) = 0;
  uVar6 = *(undefined8 *)((long)param_3 + 0xa8);
  uVar1 = *(undefined8 *)((long)param_3 + 0xb0);
  uVar2 = *(undefined8 *)((long)param_3 + 0xa0);
  *(undefined8 *)((long)param_2 + 0x98) = *(undefined8 *)((long)param_3 + 0x98);
  *(undefined8 *)((long)param_2 + 0xa0) = uVar2;
  *(undefined8 *)((long)param_2 + 0xa8) = uVar6;
  *(undefined8 *)((long)param_2 + 0xb0) = uVar1;
  *(undefined8 *)((long)param_2 + 0x80) = *(undefined8 *)((long)param_3 + 0x80);
  *(undefined8 *)((long)param_2 + 0x88) = *(undefined8 *)((long)param_3 + 0x88);
  *(undefined8 *)((long)param_2 + 0x90) = *(undefined8 *)((long)param_3 + 0x90);
  *(undefined8 *)((long)param_3 + 0x90) = 0;
  *(undefined8 *)((long)param_3 + 0x80) = 0;
  *(undefined8 *)((long)param_3 + 0x88) = 0;
  *(undefined8 *)((long)param_2 + 0xb8) = 0;
  *(undefined8 *)((long)param_2 + 0xc0) = 0;
  *(undefined8 *)((long)param_2 + 200) = 0;
  uVar6 = *(undefined8 *)((long)param_3 + 0xd0);
  uVar1 = *(undefined8 *)((long)param_3 + 0xd8);
  uVar2 = *(undefined8 *)((long)param_3 + 0xe8);
  *(undefined8 *)((long)param_2 + 0xe0) = *(undefined8 *)((long)param_3 + 0xe0);
  *(undefined8 *)((long)param_2 + 0xe8) = uVar2;
  *(undefined8 *)((long)param_2 + 0xd0) = uVar6;
  *(undefined8 *)((long)param_2 + 0xd8) = uVar1;
  *(undefined8 *)((long)param_2 + 0xb8) = *(undefined8 *)((long)param_3 + 0xb8);
  *(undefined8 *)((long)param_2 + 0xc0) = *(undefined8 *)((long)param_3 + 0xc0);
  *(undefined8 *)((long)param_2 + 200) = *(undefined8 *)((long)param_3 + 200);
  *(undefined8 *)((long)param_3 + 200) = 0;
  *(undefined8 *)((long)param_3 + 0xb8) = 0;
  *(undefined8 *)((long)param_3 + 0xc0) = 0;
  *(undefined8 *)((long)param_2 + 0xf0) = 0;
  *(undefined8 *)((long)param_2 + 0xf8) = 0;
  *(undefined8 *)((long)param_2 + 0x100) = 0;
  uVar6 = *(undefined8 *)((long)param_3 + 0x108);
  uVar1 = *(undefined8 *)((long)param_3 + 0x110);
  uVar2 = *(undefined8 *)((long)param_3 + 0x120);
  *(undefined8 *)((long)param_2 + 0x118) = *(undefined8 *)((long)param_3 + 0x118);
  *(undefined8 *)((long)param_2 + 0x120) = uVar2;
  *(undefined8 *)((long)param_2 + 0x108) = uVar6;
  *(undefined8 *)((long)param_2 + 0x110) = uVar1;
  *(undefined8 *)((long)param_2 + 0xf0) = *(undefined8 *)((long)param_3 + 0xf0);
  *(undefined8 *)((long)param_2 + 0xf8) = *(undefined8 *)((long)param_3 + 0xf8);
  *(undefined8 *)((long)param_2 + 0x100) = *(undefined8 *)((long)param_3 + 0x100);
  uVar6 = *(undefined8 *)((long)param_3 + 0x128);
  *(undefined8 *)((long)param_3 + 0xf0) = 0;
  *(undefined8 *)((long)param_3 + 0xf8) = 0;
  *(undefined8 *)((long)param_3 + 0x100) = 0;
  *(undefined8 *)((long)param_3 + 0x128) = 0;
  *(undefined8 *)((long)param_2 + 0x128) = uVar6;
  uVar3 = *(undefined2 *)((long)param_3 + 0x138);
  *(undefined8 *)((long)param_2 + 0x130) = *(undefined8 *)((long)param_3 + 0x130);
  *(undefined2 *)((long)param_2 + 0x138) = uVar3;
  if (lVar5 != 0) {
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
  }
  return;
}


