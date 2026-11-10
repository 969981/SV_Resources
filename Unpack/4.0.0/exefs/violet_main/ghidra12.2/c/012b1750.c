/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012b1750; name: FUN_012b1750
 */


void FUN_012b1750(undefined8 *param_1,long *param_2)

{
  undefined *puVar1;
  long *plVar2;
  undefined4 *puVar3;
  long lVar4;
  
  plVar2 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x40,8);
  if (plVar2 == (long *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    puVar3 = (undefined4 *)FUN_01053840();
    lVar4 = nn::os::GetTlsValue(*puVar3);
    if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = param_2;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
    plVar2[6] = 0;
    plVar2[7] = 0;
    plVar2[4] = 0;
    plVar2[5] = 0;
    puVar1 = PTR_DAT_047ddcf8;
    plVar2[2] = 0;
    plVar2[3] = 0;
    *plVar2 = (long)(puVar1 + 0x10);
    plVar2[1] = 0;
    *(undefined4 *)(plVar2 + 1) = 0x20;
    *param_1 = plVar2;
    param_1[1] = param_2;
    param_1[2] = 0x40;
    param_1[3] = 8;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  }
  return;
}


