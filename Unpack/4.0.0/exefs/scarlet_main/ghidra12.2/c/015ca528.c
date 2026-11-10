/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015ca528; name: FUN_015ca528
 */


void FUN_015ca528(long *param_1,long *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  
  uVar6 = param_1[1];
  if (uVar6 != 0) {
    uVar4 = uVar6 & 3;
    if (uVar6 - 1 < 3) {
      uVar5 = 0;
    }
    else {
      uVar5 = 0;
      do {
        *(undefined8 *)(*param_1 + uVar5 * 8) = 0;
        *(undefined8 *)(*param_1 + uVar5 * 8 + 8) = 0;
        *(undefined8 *)(*param_1 + uVar5 * 8 + 0x10) = 0;
        lVar7 = uVar5 * 8;
        uVar5 = uVar5 + 4;
        *(undefined8 *)(*param_1 + lVar7 + 0x18) = 0;
      } while ((uVar6 & 0xfffffffffffffffc) != uVar5);
    }
    if (uVar4 != 0) {
      lVar7 = uVar5 << 3;
      do {
        *(undefined8 *)(*param_1 + lVar7) = 0;
        uVar4 = uVar4 - 1;
        lVar7 = lVar7 + 8;
      } while (uVar4 != 0);
    }
    plVar8 = (long *)param_1[6];
    param_1[0xb] = 0;
    param_1[6] = 0;
    while (plVar8 != (long *)0x0) {
      if (param_2 == (long *)0x0) {
        FUN_01f96a30(param_1,plVar8);
        return;
      }
      plVar8[2] = param_2[2];
      memcpy(plVar8 + 4,param_2 + 4,0x90);
      lVar7 = *plVar8;
      FUN_015ca784(param_1,plVar8);
      param_2 = (long *)*param_2;
      plVar8 = (long *)lVar7;
    }
  }
  do {
    if (param_2 == (long *)0x0) {
      return;
    }
    puVar2 = (undefined8 *)(**(code **)(*(long *)param_1[7] + 0x10))((long *)param_1[7],0xb0,0x10);
    if (puVar2 == (undefined8 *)0x0) {
      (**(code **)(*(long *)param_1[7] + 0xe8))();
    }
    lVar7 = param_1[7];
    if (((DAT_04865a38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04865a38), iVar1 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar3 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar3 == 0) {
      memcpy(puVar2 + 2,param_2 + 2,0xa0);
    }
    else {
      if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar7;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
      memcpy(puVar2 + 2,param_2 + 2,0xa0);
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    }
    *puVar2 = 0;
    puVar2[1] = puVar2[2];
    FUN_015ca784(param_1,puVar2);
    param_2 = (long *)*param_2;
  } while( true );
}


