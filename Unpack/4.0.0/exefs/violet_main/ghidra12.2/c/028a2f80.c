/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028a2f80; name: FUN_028a2f80
 */


void FUN_028a2f80(long param_1)

{
  char acStack_30 [16];
  
  if (*(int *)(param_1 + 0x70) - 1U < 2) {
    snprintf(acStack_30,0x10,"save%d",0);
    nn::fs::Unmount(acStack_30);
    *(undefined4 *)(param_1 + 0x70) = 0;
  }
  if (*(int *)(param_1 + 0x74) - 1U < 2) {
    snprintf(acStack_30,0x10,"save%d",1);
    nn::fs::Unmount(acStack_30);
    *(undefined4 *)(param_1 + 0x74) = 0;
  }
  if (*(int *)(param_1 + 0x78) - 1U < 2) {
    snprintf(acStack_30,0x10,"save%d",2);
    nn::fs::Unmount(acStack_30);
    *(undefined4 *)(param_1 + 0x78) = 0;
  }
  if (*(int *)(param_1 + 0x7c) - 1U < 2) {
    snprintf(acStack_30,0x10,"save%d",3);
    nn::fs::Unmount(acStack_30);
    *(undefined4 *)(param_1 + 0x7c) = 0;
  }
  if (*(int *)(param_1 + 0x80) - 1U < 2) {
    snprintf(acStack_30,0x10,"save%d",4);
    nn::fs::Unmount(acStack_30);
    *(undefined4 *)(param_1 + 0x80) = 0;
  }
  if (*(int *)(param_1 + 0x84) - 1U < 2) {
    snprintf(acStack_30,0x10,"save%d",5);
    nn::fs::Unmount(acStack_30);
    *(undefined4 *)(param_1 + 0x84) = 0;
  }
  if (*(int *)(param_1 + 0x88) - 1U < 2) {
    snprintf(acStack_30,0x10,"save%d",6);
    nn::fs::Unmount(acStack_30);
    *(undefined4 *)(param_1 + 0x88) = 0;
  }
  if (*(int *)(param_1 + 0x8c) - 1U < 2) {
    snprintf(acStack_30,0x10,"save%d",7);
    nn::fs::Unmount(acStack_30);
    *(undefined4 *)(param_1 + 0x8c) = 0;
  }
  if (*(int *)(param_1 + 0x90) - 1U < 2) {
    snprintf(acStack_30,0x10,"save%d",8);
    nn::fs::Unmount(acStack_30);
    *(undefined4 *)(param_1 + 0x90) = 0;
  }
  if (*(int *)(param_1 + 0x94) - 1U < 2) {
    snprintf(acStack_30,0x10,"save%d",9);
    nn::fs::Unmount(acStack_30);
    *(undefined4 *)(param_1 + 0x94) = 0;
  }
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0x60));
  return;
}


