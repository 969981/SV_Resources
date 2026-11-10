/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01241b64; name: FUN_01241b64
 */


void FUN_01241b64(long param_1,int *param_2,undefined1 *param_3,long param_4,int *param_5)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  undefined4 uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  
  *param_3 = 0;
  bVar2 = FUN_00f7e274(param_4);
  if (bVar2 != 0) {
    uVar7 = 0;
    do {
      if (((uint)uVar7 & 0xff) < (uint)*(byte *)(param_4 + 0x30)) {
        plVar6 = *(long **)(param_4 + uVar7 * 8);
      }
      else {
        plVar6 = (long *)0x0;
      }
      uVar5 = (**(code **)(*plVar6 + 0x208))(plVar6);
      if (((((uVar5 & 1) != 0) && (*param_5 != 0)) &&
          (bVar3 = (**(code **)(*plVar6 + 0x118))(plVar6), bVar3 < 100)) &&
         ((iVar1 = *param_5, iVar1 != 0 && (*(char *)((long)param_5 + 0xd) != '\0')))) {
        uVar4 = (**(code **)(*plVar6 + 0x98))(plVar6);
        FUN_01241c74(*(undefined8 *)(param_1 + 0x20),uVar4,iVar1);
        *param_2 = *param_2 + iVar1;
        *param_3 = 1;
      }
      uVar7 = uVar7 + 1;
      param_2 = param_2 + 4;
      param_5 = param_5 + 4;
    } while (bVar2 != uVar7);
  }
  return;
}


