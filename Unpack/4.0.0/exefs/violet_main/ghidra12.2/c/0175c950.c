/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0175c950; name: FUN_0175c950
 */


long FUN_0175c950(undefined8 *param_1,long param_2,long param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  
  if (param_2 != param_3) {
    lVar8 = 0;
    do {
      uVar7 = *param_1;
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
        *(undefined8 *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = uVar7;
        *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
      }
      puVar1 = (undefined8 *)(param_4 + lVar8);
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar2 = (undefined8 *)(param_2 + lVar8);
      *puVar1 = 0;
      puVar1[1] = 0;
      if ((code *)puVar2[3] != (code *)0x0) {
        (*(code *)puVar2[3])(puVar2 + 4,puVar1 + 4);
        uVar7 = puVar2[1];
        puVar1[3] = puVar2[3];
        uVar6 = puVar2[2];
        *puVar1 = *puVar2;
        puVar1[1] = uVar7;
        puVar1[2] = uVar6;
        pcVar5 = (code *)puVar2[1];
        if (pcVar5 != (code *)0x0) {
          puVar2[2] = 0;
          puVar2[3] = 0;
          *puVar2 = 0;
          puVar2[1] = 0;
          (*pcVar5)(puVar2 + 4);
        }
      }
      puVar1[0x10] = 0;
      puVar1[0x11] = 0;
      FUN_00e5e91c(puVar1 + 0x10,puVar2 + 0x10);
      if (lVar4 != 0) {
        *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
      }
      lVar8 = lVar8 + 0x90;
    } while (param_3 - param_2 != lVar8);
    param_4 = param_4 + lVar8;
  }
  return param_4;
}


