/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00303120; name: FUN_00303120
 */


undefined8
FUN_00303120(long param_1,undefined8 param_2,uint param_3,uint param_4,uint param_5,uint param_6,
            ulong *param_7,undefined8 *param_8)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *__ptr;
  long lVar3;
  ulong uVar4;
  
  if (PTR___tls_init_047cc328 != (undefined *)0x0) {
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  uVar2 = 2;
  if ((param_8 != (undefined8 *)0x0) && (param_1 != 0)) {
    lVar3 = tpidr_el0;
    if (*(long *)(lVar3 + 0x48) != 0) {
      __ptr = (undefined8 *)FUN_0038c7b0(0x3a8);
      iVar1 = FUN_003032b0(param_1,param_2,param_3 & 1,param_4 & 1,param_5 & 1,1,param_6 & 1,
                           __ptr + 1);
      if ((iVar1 == 0) &&
         (iVar1 = FUN_003032b0(param_1,param_2,param_3 & 1,param_4 & 1,param_5 & 1,0,param_6 & 1,
                               __ptr + 2), iVar1 == 0)) {
        if (param_7 == (ulong *)0x0) {
          uVar4 = 0x4000;
        }
        else {
          uVar4 = *param_7;
          if (uVar4 >> 0x18 != 0) {
            uVar4 = 0x1000000;
          }
          if (uVar4 < 0x401) {
            uVar4 = 0x400;
          }
          *param_7 = uVar4;
        }
        __ptr[3] = uVar4;
        lVar3 = FUN_00303a80(__ptr[1]);
        __ptr[4] = lVar3;
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        FUN_00368450(__ptr + 5);
        FUN_00368450(__ptr + 0x2a);
        FUN_00368450(__ptr + 0x4f);
        *(undefined4 *)(__ptr + 0x74) = 0;
        uVar2 = 0;
        *__ptr = &PTR_LAB_04494530;
        *param_8 = __ptr;
      }
      else {
        FUN_00303a30(__ptr[1]);
        FUN_00303a30(__ptr[2]);
        free(__ptr);
        uVar2 = 7;
      }
    }
  }
  return uVar2;
}


