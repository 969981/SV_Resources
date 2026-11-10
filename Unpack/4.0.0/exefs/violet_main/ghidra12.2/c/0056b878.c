/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0056b878; name: FUN_0056b878
 */


void FUN_0056b878(long *param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong *puVar5;
  byte local_50;
  undefined7 uStack_4f;
  ulong local_40;
  long *plStack_38;
  
  lVar2 = FUN_0049e770(PTR_FUN_047cba38,0x20);
  if (lVar2 != 0) {
                    /* try { // try from 0056b8ac to 0056b8b7 has its CatchHandler @ 0056b9b8 */
    FUN_00579bf0(lVar2,0);
  }
  uVar3 = FUN_00538b54(param_3);
  if (*(int *)(lVar2 + 0x1c) == 3) {
    uVar4 = *(undefined8 *)(lVar2 + 0x10);
  }
  else {
                    /* try { // try from 0056b8d8 to 0056b937 has its CatchHandler @ 0056b9ec */
    FUN_005799fc(lVar2);
    *(undefined4 *)(lVar2 + 0x1c) = 3;
    puVar5 = (ulong *)(*(ulong *)(lVar2 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(lVar2 + 8) & 1) != 0) {
      puVar5 = (ulong *)*puVar5;
    }
    uVar4 = FUN_00585b04(puVar5);
    *(undefined8 *)(lVar2 + 0x10) = uVar4;
  }
  FUN_0057e6c8(uVar4,uVar3);
  if (*(int *)(lVar2 + 0x1c) == 3) {
    uVar3 = *(undefined8 *)(lVar2 + 0x10);
  }
  else {
    FUN_005799fc(lVar2);
    *(undefined4 *)(lVar2 + 0x1c) = 3;
    puVar5 = (ulong *)(*(ulong *)(lVar2 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(lVar2 + 8) & 1) != 0) {
      puVar5 = (ulong *)*puVar5;
    }
    uVar3 = FUN_00585b04(puVar5);
    *(undefined8 *)(lVar2 + 0x10) = uVar3;
  }
  FUN_00538e58(&local_50,param_2);
  uVar1 = (ulong)&local_50 | 1;
  if ((local_50 & 1) != 0) {
    uVar1 = local_40;
  }
                    /* try { // try from 0056b964 to 0056b96b has its CatchHandler @ 0056b9bc */
  FUN_0056ce34(uVar3,uVar1);
  if ((local_50 & 1) != 0) {
    (**(code **)(*plStack_38 + 0x18))
              (plStack_38,local_40,CONCAT71(uStack_4f,local_50) & 0xfffffffffffffffe,1);
  }
  *param_1 = lVar2;
  return;
}


