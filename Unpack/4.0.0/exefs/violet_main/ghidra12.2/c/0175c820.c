/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0175c820; name: FUN_0175c820
 */


undefined8 * FUN_0175c820(undefined8 *param_1,long param_2,long param_3,undefined8 *param_4)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_LAB_047d3900;
  if (param_2 != param_3) {
    do {
      uVar4 = *param_1;
      if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(puVar1,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar3 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar3 == 0) {
        *param_4 = 0;
        param_4[1] = 0;
        FUN_0178f674(param_4,param_2);
      }
      else {
        if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined8 *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = uVar4;
        *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
        *param_4 = 0;
        param_4[1] = 0;
        FUN_0178f674(param_4,param_2);
        *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
      }
      param_2 = param_2 + 0x10;
      param_4 = param_4 + 2;
    } while (param_3 != param_2);
  }
  return param_4;
}


