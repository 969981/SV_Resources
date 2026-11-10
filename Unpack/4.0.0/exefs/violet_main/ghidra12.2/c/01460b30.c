/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01460b30; name: FUN_01460b30
 */


void FUN_01460b30(long param_1,long *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  uVar2 = (**(code **)(*param_2 + 0x98))(param_2);
  puVar4 = (uint *)(**(code **)(*param_2 + 0x468))(param_2);
  uVar6 = *(undefined8 *)(*(long *)(param_1 + 8) + 0xd0);
  uVar1 = *puVar4;
  lVar5 = FUN_0129b478(uVar6,6,uVar2);
  if (lVar5 != 0) {
    do {
      uVar3 = FUN_0107bb74(lVar5);
      if (uVar1 == (uVar3 & 0xffff)) {
        FUN_014608b0(param_1,lVar5);
        lVar5 = FUN_0129b478(uVar6,6,uVar2);
      }
      else {
        lVar5 = FUN_01255bdc(uVar6,lVar5,0);
      }
    } while (lVar5 != 0);
  }
  return;
}


