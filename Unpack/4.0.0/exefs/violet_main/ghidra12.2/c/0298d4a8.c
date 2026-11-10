/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0298d4a8; name: FUN_0298d4a8
 */


void FUN_0298d4a8(undefined8 param_1,undefined8 param_2,long *param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  
  uVar4 = FUN_0154b684();
  if ((uVar4 & 1) != 0) {
    lVar5 = FUN_0170ad34(param_1);
    puVar6 = (undefined8 *)(**(code **)param_3[5])(param_3 + 5);
    if (((*PTR_DAT_047d3f00 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_047d3f00), iVar3 != 0)) {
      uVar7 = FUN_01b07aa4();
      *(undefined8 *)PTR_DAT_047d3f08 = uVar7;
      __cxa_guard_release(PTR_DAT_047d3f00);
    }
    if (puVar6 != (undefined8 *)0x0) {
      do {
        if (puVar6 == (undefined8 *)PTR_DAT_047d3f08) {
          uVar2 = (**(code **)(*param_3 + 0x98))(param_3);
          lVar5 = FUN_0154b718(lVar5 + 0x124,param_1,param_2,uVar2);
          *(undefined1 *)(lVar5 + 10) = 1;
          uVar1 = FUN_013457dc(param_3);
          *(undefined1 *)(lVar5 + 0xb) = uVar1;
          return;
        }
        puVar6 = (undefined8 *)*puVar6;
      } while (puVar6 != (undefined8 *)0x0);
    }
  }
  return;
}


