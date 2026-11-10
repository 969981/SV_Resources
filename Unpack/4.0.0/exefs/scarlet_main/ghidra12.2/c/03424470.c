/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03424470; name: FUN_03424470
 */


void FUN_03424470(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar4 = param_1 + (param_3 & 0xffffffff) * 0x290;
  lVar3 = *(long *)(lVar4 + 0x350);
  puVar1 = (undefined8 *)(lVar4 + 0x350);
  if (lVar3 != 0) {
    param_3 = param_3 & 0xffffffff;
    FUN_0342549c(lVar3,param_1);
    puVar2 = PTR_DAT_047e2fd0;
    lVar3 = param_1 + param_3 * 0x290;
    if (*(long *)(lVar3 + 0x308) != 0) {
      lVar4 = param_1 + param_3 * 0x290;
      *(undefined4 *)(lVar4 + 0x310) = 0;
      (**(code **)(puVar2 + 0x30))(10);
      *(undefined8 *)(lVar3 + 0x308) = 0;
      *(undefined4 *)(lVar4 + 0x314) = 0;
    }
    lVar4 = param_1 + param_3 * 0x290;
    *(undefined1 *)(lVar4 + 0x318) = 0;
    if (*(long *)(lVar4 + 800) != 0) {
      lVar5 = param_1 + param_3 * 0x290;
      *(undefined4 *)(lVar5 + 0x328) = 0;
      (**(code **)(puVar2 + 0x30))(10);
      *(undefined8 *)(lVar4 + 800) = 0;
      *(undefined4 *)(lVar5 + 0x32c) = 0;
    }
    lVar4 = param_1 + param_3 * 0x290;
    *(undefined1 *)(lVar4 + 0x330) = 0;
    if (*(long *)(lVar4 + 0x288) != 0) {
      lVar5 = param_1 + param_3 * 0x290;
      *(undefined4 *)(lVar5 + 0x290) = 0;
      (**(code **)(puVar2 + 0x30))(10);
      *(undefined8 *)(lVar4 + 0x288) = 0;
      *(undefined4 *)(lVar5 + 0x294) = 0;
    }
    lVar5 = param_1 + param_3 * 0x290;
    *(undefined1 *)(lVar5 + 0x298) = 0;
    if (*(long *)(lVar5 + 0x2a0) != 0) {
      lVar6 = param_1 + param_3 * 0x290;
      *(undefined4 *)(lVar6 + 0x2a8) = 0;
      (**(code **)(puVar2 + 0x30))(10);
      *(undefined8 *)(lVar5 + 0x2a0) = 0;
      *(undefined4 *)(lVar6 + 0x2ac) = 0;
    }
    lVar5 = param_1 + param_3 * 0x290;
    *(undefined1 *)(lVar5 + 0x2b0) = 0;
    if (*(long *)(lVar5 + 0x208) != 0) {
      lVar6 = param_1 + param_3 * 0x290;
      *(undefined4 *)(lVar6 + 0x210) = 0;
      (**(code **)(puVar2 + 0x30))(10);
      *(undefined8 *)(lVar5 + 0x208) = 0;
      *(undefined4 *)(lVar6 + 0x214) = 0;
    }
    lVar6 = param_1 + param_3 * 0x290;
    *(undefined1 *)(lVar6 + 0x218) = 0;
    if (*(long *)(lVar6 + 0x220) != 0) {
      lVar7 = param_1 + param_3 * 0x290;
      *(undefined4 *)(lVar7 + 0x228) = 0;
      (**(code **)(puVar2 + 0x30))(10);
      *(undefined8 *)(lVar6 + 0x220) = 0;
      *(undefined4 *)(lVar7 + 0x22c) = 0;
    }
    lVar6 = param_1 + param_3 * 0x290;
    *(undefined1 *)(lVar6 + 0x230) = 0;
    if (*(long *)(lVar6 + 0x188) != 0) {
      lVar7 = param_1 + param_3 * 0x290;
      *(undefined4 *)(lVar7 + 400) = 0;
      (**(code **)(puVar2 + 0x30))(10);
      *(undefined8 *)(lVar6 + 0x188) = 0;
      *(undefined4 *)(lVar7 + 0x194) = 0;
    }
    lVar6 = param_1 + param_3 * 0x290;
    *(undefined1 *)(lVar6 + 0x198) = 0;
    if (*(long *)(lVar6 + 0x1a0) != 0) {
      lVar7 = param_1 + param_3 * 0x290;
      *(undefined4 *)(lVar7 + 0x1a8) = 0;
      (**(code **)(puVar2 + 0x30))(10);
      *(undefined8 *)(lVar6 + 0x1a0) = 0;
      *(undefined4 *)(lVar7 + 0x1ac) = 0;
    }
    param_1 = param_1 + param_3 * 0x290;
    *(undefined8 *)(param_1 + 0x100) = 0;
    *(undefined8 *)(param_1 + 0x108) = 0;
    *(undefined8 *)(param_1 + 0x1b8) = 0;
    *(undefined8 *)(param_1 + 0x1c0) = 0;
    *(undefined8 *)(param_1 + 0x1c5) = 0;
    *(undefined8 *)(param_1 + 0x220) = 0;
    *(undefined8 *)(param_1 + 0x228) = 0;
    *(undefined1 *)(param_1 + 0x230) = 0;
    memset((void *)(lVar5 + 0x1d0),0,0x49);
    *(undefined8 *)(param_1 + 0x238) = 0;
    *(undefined8 *)(param_1 + 0x240) = 0;
    *(undefined8 *)(param_1 + 0x245) = 0;
    *(undefined8 *)(param_1 + 0x2a0) = 0;
    *(undefined8 *)(param_1 + 0x2a8) = 0;
    *(undefined1 *)(param_1 + 0x2b0) = 0;
    memset((void *)(lVar4 + 0x250),0,0x49);
    *(undefined8 *)(param_1 + 0x2b8) = 0;
    *(undefined8 *)(param_1 + 0x2c0) = 0;
    *(undefined8 *)(param_1 + 0x2c5) = 0;
    *(undefined8 *)(param_1 + 800) = 0;
    *(undefined8 *)(param_1 + 0x328) = 0;
    *(undefined1 *)(param_1 + 0x330) = 0;
    memset((void *)(lVar3 + 0x2d0),0,0x49);
    *(undefined8 *)(param_1 + 0x338) = 0;
    *(undefined8 *)(param_1 + 0x340) = 0;
    *(undefined8 *)(param_1 + 0x345) = 0;
    *puVar1 = 0;
    memset((void *)(param_1 + 0x140),0,0x59);
    *(undefined8 *)(param_1 + 0x1a0) = 0;
    *(undefined8 *)(param_1 + 0x1a8) = 0;
    *(undefined1 *)(param_1 + 0x1b0) = 0;
    *(undefined1 *)(param_1 + 0x1cc) = 1;
    *(undefined1 *)(param_1 + 0x24c) = 1;
    *(undefined1 *)(param_1 + 0x2cc) = 1;
    *(undefined1 *)(param_1 + 0x34c) = 1;
  }
  *puVar1 = param_2;
  return;
}


