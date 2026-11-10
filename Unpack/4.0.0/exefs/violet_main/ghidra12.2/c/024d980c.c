/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 024d980c; name: FUN_024d980c
 */


void FUN_024d980c(undefined1 *param_1,undefined8 param_2,double param_3,double param_4,
                 double param_5,double param_6,byte *param_7)

{
  int iVar1;
  undefined *puVar2;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  if ((((1 < *param_7) ||
       (puVar2 = *(undefined **)(param_7 + 8), *(undefined **)(param_7 + 8) == (undefined *)0x0)) &&
      (puVar2 = PTR_DAT_047d5150, (*PTR_DAT_047d5148 & 1) == 0)) &&
     (iVar1 = __cxa_guard_acquire(PTR_DAT_047d5148), puVar2 = PTR_DAT_047d5150, iVar1 != 0)) {
    *(undefined8 *)(PTR_DAT_047d5150 + 0x30) = 0;
    *(undefined8 *)(puVar2 + 0x38) = 0;
    *(undefined8 *)(puVar2 + 0x20) = 0;
    *(undefined8 *)(puVar2 + 0x28) = 0;
    *(undefined8 *)(puVar2 + 0x10) = 0;
    *(undefined8 *)(puVar2 + 0x18) = 0;
    *(undefined8 *)puVar2 = 0;
    *(undefined8 *)(puVar2 + 8) = 0;
    __cxa_guard_release(PTR_DAT_047d5148);
  }
  FUN_024db1f4(&local_40,param_2,(float)param_3,(float)param_4,(float)param_5,(float)param_6,puVar2)
  ;
  *param_1 = 1;
  *(undefined8 *)(param_1 + 0x18) = local_30;
  *(undefined8 *)(param_1 + 0x20) = uStack_28;
  *(undefined8 *)(param_1 + 8) = local_40;
  *(undefined8 *)(param_1 + 0x10) = uStack_38;
  return;
}


