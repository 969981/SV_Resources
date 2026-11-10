/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e938d0; name: FUN_01e938d0
 */


void FUN_01e938d0(undefined8 *param_1,long *param_2,void *param_3)

{
  void *__dest;
  undefined4 *puVar1;
  long lVar2;
  
  __dest = (void *)(**(code **)(*param_2 + 0x10))(param_2,0x1204,4);
  if (__dest == (void *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    puVar1 = (undefined4 *)FUN_01053840();
    lVar2 = nn::os::GetTlsValue(*puVar1);
    if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = param_2;
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
    memcpy(__dest,param_3,0x1204);
    *param_1 = __dest;
    param_1[1] = param_2;
    param_1[2] = 0x1204;
    param_1[3] = 4;
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  }
  return;
}


