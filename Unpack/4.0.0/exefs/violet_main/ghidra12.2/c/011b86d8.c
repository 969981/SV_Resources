/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 011b86d8; name: FUN_011b86d8
 */


void FUN_011b86d8(undefined8 param_1,ulong param_2,undefined8 *param_3,char param_4,int param_5)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  long lVar5;
  
  uVar3 = *param_3;
  if (param_5 - 1U < 10) {
    uVar4 = *(undefined4 *)(&DAT_03d5ef58 + (long)(int)(param_5 - 1U) * 4);
  }
  else {
    uVar4 = 0;
  }
  uVar2 = param_2;
  if (param_4 == '\0') {
    lVar5 = 0;
  }
  else if (param_4 == '\x01') {
    lVar5 = 1;
  }
  else {
    if ((*PTR_DAT_047d8c98 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(PTR_DAT_047d8c98);
      uVar2 = param_2 & 0xffffffff;
      if (iVar1 != 0) {
        FUN_00100190(PTR_LAB_047dae08,PTR_DAT_047d8ca0,&PTR_LOOP_04483000,uVar4);
        __cxa_guard_release(PTR_DAT_047d8c98);
        uVar2 = param_2 & 0xffffffff;
      }
    }
    lVar5 = *(long *)PTR_DAT_047d8ca0;
    *(long *)PTR_DAT_047d8ca8 = lVar5;
    lVar5 = (ulong)(*(int *)(lVar5 + 0x2b0) == 5) << 1;
  }
  FUN_011b87e8(param_1,uVar2,uVar3,uVar4,lVar5,0);
  return;
}


