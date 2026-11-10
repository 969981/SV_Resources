/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00877c00; name: FUN_00877c00
 */


void FUN_00877c00(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           (**(code **)(**(long **)(param_1 + 0x18) + 0x10))
                     (*(long **)(param_1 + 0x18),0x518,
                      "D:/Jenkins/ws/wwise_v2021.1/Wwise/SDK/source/SoundEngine/Plugins/Effects/MasteringSuite/MasteringSuiteFX.cpp"
                      ,0x3d9);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0xffffffff;
    *(undefined2 *)(puVar1 + 1) = 0;
    *(undefined4 *)((long)puVar1 + 0x34) = 0;
    *(undefined1 *)(puVar1 + 0x16) = 0;
    *(undefined4 *)((long)puVar1 + 0xb4) = 0;
    *(undefined1 *)(puVar1 + 0x17) = 0;
    *(undefined8 *)((long)puVar1 + 0xc) = 0;
    *(undefined8 *)((long)puVar1 + 0x14) = 0;
    *(undefined8 *)((long)puVar1 + 0x1c) = 0;
    *(undefined8 *)((long)puVar1 + 0x24) = 0;
    *(undefined8 *)((long)puVar1 + 0x29) = 0;
    *(undefined8 *)((long)puVar1 + 0xbc) = 0x3f80000000000004;
    puVar1[0x19] = 0;
    *(undefined1 *)(puVar1 + 0x24) = 0;
    *(undefined8 *)((long)puVar1 + 0x124) = 0x3f80000000000004;
    puVar1[0x26] = 0;
    *(undefined1 *)(puVar1 + 0x31) = 0;
    *(undefined8 *)((long)puVar1 + 0x18c) = 0x3f80000000000004;
    puVar1[0x33] = 0;
    *(undefined1 *)(puVar1 + 0x3e) = 0;
    *(undefined8 *)((long)puVar1 + 500) = 0x3f80000000000004;
    puVar1[0x40] = 0;
    *(undefined1 *)(puVar1 + 0x4b) = 0;
    *(undefined4 *)((long)puVar1 + 0x28c) = 0x3f800000;
    *(undefined2 *)(puVar1 + 0x52) = 0;
    puVar1[0x53] = 0;
    memset(puVar1 + 0x72,0,0x188);
  }
  *(undefined8 **)(param_1 + 0x418) = puVar1;
  return;
}


