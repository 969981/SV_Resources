/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0348a918; name: FUN_0348a918
 */


undefined8 FUN_0348a918(long param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  long lVar3;
  undefined4 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  
  puVar1 = PTR_PTR_047e71e0;
  lVar7 = *(long *)(*(long *)(param_1 + 400) + 8);
  if ((*(uint *)(lVar7 + 400) == 0) ||
     (lVar3 = (**(code **)(*(long *)PTR_PTR_047e71e0 + 0x28))
                        (PTR_PTR_047e71e0,0,(ulong)*(uint *)(lVar7 + 400) * 0x18,
                         "../../../../include\\AK/SoundEngine/Common/IAkPluginMemAlloc.h",0xce),
     lVar3 == 0)) {
    return 0;
  }
  if (*(int *)(lVar7 + 400) != 0) {
    plVar5 = *(long **)(lVar7 + 0x188);
    uVar8 = 0;
    do {
      uVar2 = (**(code **)(*plVar5 + 0x10))(plVar5);
      puVar4 = (undefined4 *)(lVar3 + uVar8 * 0x18);
      uVar8 = (ulong)((int)uVar8 + 1);
      *puVar4 = uVar2;
      *(long *)(puVar4 + 2) = plVar5[1];
      puVar4[4] = 0;
      plVar5 = plVar5 + 0xc;
    } while (plVar5 != (long *)(*(long *)(lVar7 + 0x188) + (ulong)*(uint *)(lVar7 + 400) * 0x60));
  }
  uVar6 = *(undefined8 *)(lVar3 + 8);
  (**(code **)(*(long *)puVar1 + 0x18))(puVar1,lVar3);
  return uVar6;
}


