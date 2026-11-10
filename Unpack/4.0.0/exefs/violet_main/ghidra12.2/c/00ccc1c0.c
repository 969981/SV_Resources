/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00ccc1c0; name: FUN_00ccc1c0
 */


void FUN_00ccc1c0(long *param_1,long *param_2,undefined8 *param_3)

{
  char cVar1;
  long lVar2;
  undefined4 *puVar3;
  long lVar4;
  
  lVar2 = (**(code **)(*param_2 + 0x10))(param_2,0x48,8);
  if (lVar2 == 0) {
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
    *(undefined2 *)(lVar2 + 0x40) = 0;
    cVar1 = (**(code **)PTR_DAT_047e1f40)(lVar2,*param_3);
    *(bool *)(lVar2 + 0x42) = cVar1 != '\0';
    *param_1 = lVar2;
    param_1[1] = (long)param_2;
    param_1[2] = 0x48;
    param_1[3] = 8;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  }
  return;
}


