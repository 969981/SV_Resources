/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00800fd4; name: FUN_00800fd4
 */


void FUN_00800fd4(ushort *param_1)

{
  ushort uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[0xc] = 0xffff;
  param_1[0xd] = 0xffff;
  param_1[0xe] = 0xffff;
  param_1[0xf] = 0xffff;
  if ((*(undefined8 **)(param_1 + 4) != (undefined8 *)0x0) &&
     (uVar2 = (ulong)*param_1, *param_1 != 0)) {
    uVar5 = 0;
    puVar6 = (undefined8 *)**(undefined8 **)(param_1 + 4);
    while( true ) {
      if (puVar6 != (undefined8 *)0x0) {
        *puVar6 = 0xffffffffffffffff;
        puVar6[1] = 0;
        *(undefined4 *)(puVar6 + 2) = 0;
        FUN_0078b184(puVar6 + 3);
        FUN_0078b184(puVar6 + 7);
        *(undefined2 *)(puVar6 + 0xb) = 0;
        *(undefined1 *)((long)puVar6 + 0x5a) = 0;
        *(undefined4 *)((long)puVar6 + 0x5c) = 0;
        uVar2 = (ulong)*param_1;
      }
      uVar5 = uVar5 + 1;
      if (uVar2 <= uVar5) break;
      puVar6 = *(undefined8 **)(*(long *)(param_1 + 4) + uVar5 * 8);
    }
  }
  lVar3 = *(long *)(param_1 + 0x14);
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  if (lVar3 != 0) {
    uVar1 = *param_1;
    uVar2 = (ulong)uVar1;
    if (uVar2 != 0) {
      uVar5 = uVar2 & 3;
      if (uVar2 - 1 < 3) {
        uVar4 = 0;
      }
      else {
        uVar4 = 0;
        puVar6 = (undefined8 *)(lVar3 + 0x10);
        do {
          uVar4 = uVar4 + 4;
          puVar6[-2] = 0xffffffffffffffff;
          puVar6[-1] = 0xffffffffffffffff;
          *puVar6 = 0xffffffffffffffff;
          puVar6[1] = 0xffffffffffffffff;
          puVar6 = puVar6 + 4;
        } while ((uVar2 & 0xfffc) != uVar4);
      }
      if ((uVar1 & 3) != 0) {
        puVar6 = (undefined8 *)(lVar3 + uVar4 * 8);
        do {
          uVar5 = uVar5 - 1;
          *puVar6 = 0xffffffffffffffff;
          puVar6 = puVar6 + 1;
        } while (uVar5 != 0);
      }
    }
  }
  return;
}


