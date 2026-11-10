/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01802f88; name: FUN_01802f88
 */


undefined4 FUN_01802f88(long param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int *piVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  char cVar8;
  undefined4 uVar9;
  char local_78 [8];
  long local_70;
  long *local_58;
  
  puVar1 = *(undefined8 **)(param_1 + 0x88);
  puVar2 = *(undefined8 **)(param_1 + 0x90);
  while( true ) {
    if (puVar1 == puVar2) {
      return 0xbf800000;
    }
    FUN_01340a44(local_78,puVar1,1);
    lVar6 = *param_2;
    plVar5 = (long *)param_2[3];
    if (plVar5 == (long *)0x0) {
      lVar7 = local_70;
      cVar8 = local_78[0];
    }
    else {
      (**(code **)(*plVar5 + 0x18))(plVar5);
      lVar7 = local_70;
      cVar8 = local_78[0];
      (**(code **)(*plVar5 + 0x20))(plVar5);
    }
    if (local_78[0] != '\0') {
      if (local_58 != (long *)0x0) {
        (**(code **)(*local_58 + 0x20))();
      }
      local_78[0] = '\0';
    }
    if (lVar7 == lVar6 && cVar8 != '\0') break;
    puVar1 = puVar1 + 0x3a;
  }
  piVar3 = (int *)*puVar1;
  if (*(ushort *)((long)piVar3 - (long)*piVar3) < 9) {
    return 0;
  }
  uVar4 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[4];
  if (uVar4 == 0) {
    return 0;
  }
  uVar9 = NEON_ucvtf(*(undefined4 *)((long)piVar3 + uVar4));
  return uVar9;
}


