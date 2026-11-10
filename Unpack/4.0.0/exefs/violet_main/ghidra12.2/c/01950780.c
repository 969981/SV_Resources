/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01950780; name: FUN_01950780
 */


void FUN_01950780(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,long *param_4)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  if (param_2 != param_3) {
    puVar4 = (undefined8 *)*param_4;
    do {
      uVar3 = *param_1;
      if (((DAT_04865a38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04865a38), iVar1 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar2 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar2 == 0) {
        puVar4[1] = param_2[1];
        uVar3 = *param_2;
        puVar4[3] = 0;
        *puVar4 = uVar3;
        puVar4[2] = 0;
        FUN_00fa4838(puVar4 + 2,param_2 + 2);
      }
      else {
        if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined8 *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = uVar3;
        *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
        puVar4[1] = param_2[1];
        uVar3 = *param_2;
        puVar4[3] = 0;
        *puVar4 = uVar3;
        puVar4[2] = 0;
        FUN_00fa4838(puVar4 + 2,param_2 + 2);
        *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
      }
      param_2 = param_2 + 4;
      puVar4 = (undefined8 *)(*param_4 + 0x20);
      *param_4 = (long)puVar4;
    } while (param_3 != param_2);
  }
  return;
}


