/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0298fbc8; name: FUN_0298fbc8
 */


void FUN_0298fbc8(undefined8 *param_1,void *param_2,uint *param_3,long *param_4)

{
  void *pvVar1;
  undefined4 *puVar2;
  long lVar3;
  
  *param_3 = 0x4e;
  pvVar1 = (void *)(**(code **)(*param_4 + 0x10))(param_4,0x4e,1);
  if (pvVar1 == (void *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    pvVar1 = (void *)0x0;
  }
  else {
    puVar2 = (undefined4 *)FUN_01053840();
    lVar3 = nn::os::GetTlsValue(*puVar2);
    if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_4;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
    memset(pvVar1,0,0x4e);
    *param_1 = pvVar1;
    param_1[1] = param_4;
    param_1[2] = 0x4e;
    param_1[3] = 1;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    pvVar1 = (void *)*param_1;
  }
  memcpy(pvVar1,param_2,(ulong)*param_3);
  return;
}


