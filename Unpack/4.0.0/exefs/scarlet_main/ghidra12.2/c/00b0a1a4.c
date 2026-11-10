/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00b0a1a4; name: FUN_00b0a1a4
 */


void FUN_00b0a1a4(long param_1)

{
  long lVar1;
  long lVar2;
  void *__dest;
  GattService aGStack_298 [8];
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined4 local_270;
  undefined1 local_26c;
  
  lVar2 = 0;
  do {
    nn::bluetooth::GattService::GattService(aGStack_298);
    lVar1 = param_1 + lVar2;
    *(undefined8 *)(lVar1 + 0x48) = local_280;
    *(undefined8 *)(lVar1 + 0x50) = uStack_278;
    *(undefined8 *)(lVar1 + 0x38) = local_290;
    *(undefined8 *)(lVar1 + 0x40) = uStack_288;
    *(undefined1 *)(lVar1 + 0x5c) = local_26c;
    *(undefined4 *)(lVar1 + 0x58) = local_270;
    nn::bluetooth::GattService::~GattService(aGStack_298);
    lVar2 = lVar2 + 0x30;
  } while (lVar2 != 0x600);
  lVar2 = -0x4700;
  do {
    nn::bluetooth::GattCharacteristic::GattCharacteristic((GattCharacteristic *)aGStack_298);
    lVar1 = param_1 + lVar2;
    *(undefined8 *)(lVar1 + 0x4d58) = uStack_278;
    *(undefined8 *)(lVar1 + 0x4d50) = local_280;
    *(undefined8 *)(lVar1 + 0x4d48) = uStack_288;
    *(undefined8 *)(lVar1 + 0x4d40) = local_290;
    memcpy((void *)(lVar1 + 0x4d60),&local_270,0x210);
    nn::bluetooth::GattCharacteristic::~GattCharacteristic((GattCharacteristic *)aGStack_298);
    lVar2 = lVar2 + 0x238;
  } while (lVar2 != 0);
  __dest = (void *)(param_1 + 0x4d68);
  lVar2 = 0x20;
  do {
    nn::bluetooth::GattDescriptor::GattDescriptor((GattDescriptor *)aGStack_298);
    *(undefined8 *)((long)__dest + -0x10) = local_280;
    *(undefined8 *)((long)__dest + -8) = uStack_278;
    *(undefined8 *)((long)__dest + -0x20) = local_290;
    *(undefined8 *)((long)__dest + -0x18) = uStack_288;
    memcpy(__dest,&local_270,0x208);
    nn::bluetooth::GattDescriptor::~GattDescriptor((GattDescriptor *)aGStack_298);
    lVar2 = lVar2 + -1;
    __dest = (void *)((long)__dest + 0x230);
  } while (lVar2 != 0);
  *(undefined2 *)(param_1 + 0x630) = 0;
  *(undefined2 *)(param_1 + 0x4d38) = 0;
  *(undefined2 *)(param_1 + 0x9340) = 0;
  *(undefined2 *)(param_1 + 0x9448) = 0;
  return;
}


